#pragma once

#include "Core.h"

namespace Hazel {
	class HAZEL_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	//To be define by the client
	Application* CreateApplication();

}
