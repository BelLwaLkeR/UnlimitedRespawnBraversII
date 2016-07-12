#pragma once
#include <vector>
#include <Source/Utility/SmartPtr.h>
#include <Source/Framework/Entity/Entity.h>
#include <Source/Framework/Component/ComponentFactory.h>
#include <Source/Utility/Singleton.h>

#define SGLT_ENTITYMANAGER framework::EntityManager::getInstance()

namespace framework {
	class EntityManager: public util::Singleton<EntityManager>
	{
	public:
		EntityManager();
		~EntityManager();
		
		util::WeakPtr<Entity> addEntity();
 		util::WeakPtr<Entity> addEntity(util::SharedPtr<std::string> component);
		util::WeakPtr<Entity> addEntity(const std::vector<std::string>& componentList);
		void clearEntity();




	private:
		std::vector<util::SharedPtr<Entity>> m_pEntityList;
		
	};
}