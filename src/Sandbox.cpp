#include "MadEngine/Mad.h"

class Sandbox : public MadEngine::Application {
	public:
		Sandbox() {

		}
		~Sandbox() {

		}
};

MadEngine::Application* MadEngine::CreateApplication () {
	return new Sandbox();
}
