#pragma once
#include "../UIView.h"

namespace ed
{
	class DebugWatchUI : public UIView
	{
	public:
		DebugWatchUI(GUIManager* ui, ed::InterfaceManager* objects, const std::string& name = "", bool visible = true) :
			UIView(ui, objects, name, visible) {
			m_newExpr[0] = 0;
		}

		void Refresh();

		virtual void OnEvent(const SDL_Event& e);
		virtual void Update(float delta);

	private:
		char m_newExpr[512];
	};
}