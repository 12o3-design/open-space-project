#include "Entity.h"

int Entity::numEntities = 0;

Entity::Entity()
{
  entityID = numEntities;
  numEntities++;
}

void Entity::setEntityID(int entityID)
{
  entityID_ = entityID;
}

int Entity::getEntityID()
{
  return entityID_;
}
