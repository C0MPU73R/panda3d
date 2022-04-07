/**
* @file actor.h
*/

#ifndef ACTOR_H
#define ACTOR_H

#include "pandabase.h"
#include "character.h"
#include "auto_bind.h"
#include "animControlCollection.h"

#include <string>
#include <map>

class Character;

/*
A C++ interface for the Python Actor found in Direct.
See "direct/src/actor/Actor.py" and associated modules.
*/

class EXPL_PANDA_ACTOR Actor : public NodePath {
  /*
  Actor class: Contains methods for creating, manipulating
     and playing animations on characters
  */

PUBLISHED:
  explicit Actor();
  explicit Actor(const Actor& actor);
  virtual ~Actor();

public:
  virtual NodePath* makeCopy() const;

PUBLISHED:
  void listJoints(std::string partName = "modelRoot", std::string lodName = "lodRoot");
  void __doListJoints();
  void getActorInfo();
  void getAnimNames();
  void pprint();
  void destroy();
  void removeNode();
  void flush();

  //Accessing
  std::map<std::string, std::string> getAnimControlDict();
  void removeAnimContrlDict();





private:
  std::map<std::string, std::string> __animControlDict;








};
#endif // !ACTOR_H
