#include "interfaces/igameeventhandler.h"
#include "core/playerbase.h"
#include "core/resourcemaps.h"
#include "player.h"
#include "mainwindow.h"

#ifndef GAMEEVENTHANDLER_H
#define GAMEEVENTHANDLER_H

namespace Student {

class ObjectManager;

class GameEventHandler : public Course::iGameEventHandler
{

public:
    GameEventHandler();

    ~GameEventHandler();

    bool modifyResource(std::shared_ptr<Course::PlayerBase> player,
                                    Course::BasicResource resource,
                                    int amount);

    bool modifyResources(std::shared_ptr<Course::PlayerBase> player,
                                     Course::ResourceMap resources);

    void addObjectManager(std::shared_ptr<ObjectManager> objectManager);


private:
    std::shared_ptr<ObjectManager> m_objectManager;


}; // class GameEventHandler

} // namespace Student


#endif // GAMEEVENTHANDLER_H
