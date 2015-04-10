/*
===========================================================================

Unvanquished GPL Source Code
Copyright (C) 2014 Unvanquished Developers

This file is part of the Unvanquished GPL Source Code (Unvanquished Source Code).

Unvanquished Source Code is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

Unvanquished Source Code is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with Unvanquished Source Code.  If not, see <http://www.gnu.org/licenses/>.

===========================================================================
*/

#ifndef IGNITABLE_COMPONENT_H_
#define IGNITABLE_COMPONENT_H_

#include "../CBSEBackend.h"
#include "../CBSEComponents.h"

#include "../sg_local.h"

class IgnitableComponent: public IgnitableComponentBase {

	public:
		// ///////////////////// //
		// Autogenerated Members //
		// ///////////////////// //

		/**
		 * @brief Default constructor of the IgnitableComponent.
		 * @param entity The entity that owns the component instance.
		 * @param alwaysOnFire
		 * @note This method is an interface for autogenerated code, do not modify its signature.
		 */
		IgnitableComponent(Entity &entity, bool alwaysOnFire);

		/**
		 * @brief Handle the PrepareNetCode message.
		 * @note This method is an interface for autogenerated code, do not modify its signature.
		 */
		void HandlePrepareNetCode();

		/**
		 * @brief Handle the Think message.
		 * @param timeDelta
		 * @note This method is an interface for autogenerated code, do not modify its signature.
		 */
		void HandleThink(int timeDelta);

		/**
		 * @brief Handle the Ignite message.
		 * @param fireStarter
		 * @note This method is an interface for autogenerated code, do not modify its signature.
		 */
		void HandleIgnite(struct gentity_s* fireStarter);

		/**
		 * @brief Handle the Extinguish message.
		 * @param immunityTime
		 * @note This method is an interface for autogenerated code, do not modify its signature.
		 */
		void HandleExtinguish(int immunityTime);

		// /////////////////// //
		// Handwritten Members //
		// /////////////////// //



	private:
		// /////////////////// //
		// Handwritten Members //
		// /////////////////// //

		gentity_t* fireStarter = nullptr; /**< Client who orginally started the fire. */
		bool onFire;
		int immuneUntil;
		int nextSelfDamage;
		int nextSplashDamage;
		int nextStatusAction; /**< Time when burn stop or fire spread chances are evaluated. */
};

#endif // IGNITABLE_COMPONENT_H_
