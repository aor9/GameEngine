#include "Application.h"

#include "Aor/Events/ApplicationEvent.h"
#include "Aor/Log.h"

namespace Aor {

	Aor::Application::Application()
	{

	}

	Aor::Application::~Application()
	{

	}

	void Application::Run()
	{
		WindowResizeEvent e(1280, 720);
		if (e.IsInCategory(EventCategoryApplication))
		{
			AOR_TRACE("{}", e.ToString());
		}

		while (true);
	}

}