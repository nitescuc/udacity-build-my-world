#include <gazebo/gazebo.hh>
#include <gazebo/physics/physics.hh>

namespace gazebo
{
  class WorldPluginWelcomeMessage : public WorldPlugin
  {
    public: WorldPluginWelcomeMessage() : WorldPlugin()
            {
              printf("Welcome to Cristian's World!\n");
            }

    public: void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf)
            {
              printf("We have %d models here\n", _world->GetModelCount());
            }
  };
  GZ_REGISTER_WORLD_PLUGIN(WorldPluginWelcomeMessage)
}
