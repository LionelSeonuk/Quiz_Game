#include "Player.h"

Player::Player() : name(""), id("") {}
Player::Player(string name, string id) : name(name), id(id) {}
Player::~Player() {}

string Player::getName() const { return name; }
void Player::setName(const string &name) { this->name = name; }

string Player::getId() const { return id; }
void Player::setId(const string &id) { this->id = id; }
