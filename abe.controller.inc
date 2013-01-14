<?php

/**
 * @file This file includes abe controller class.
 */

class abeEntityController extends EntityAPIController {
  public function __construct($entityType) {
    parent::__construct($entityType);
  }

  /**
   * Create entity.
   * @param array $values
   * @return object|void
   */
  public function create(array $values = array()) {
    global $user;
    $values['user_id'] = $user->uid;
    return parent::create($values);
  }

  /**
   * Save entity.
   * @param $entity
   * @param DatabaseTransaction $transaction
   * @return bool|int
   */
  public function save($entity, DatabaseTransaction $transaction = NULL) {
    return parent::save($entity, $transaction);
  }
}
