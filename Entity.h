// ABC from which all game entities are directly derived
class Entity
{
public:
  Entity();

  void setEntityID(entityID);
  int getEntityID();

  virtual void update() =0;

private:
  int entityID_;
};
