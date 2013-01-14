<?php

/**
 * @file This file includes abe entity class.
 */

class abeEntity extends Entity {
  public $cid, $user_id;
  public function __construct($values) {
    parent::__construct($values, 'abe_entity');
  }
}