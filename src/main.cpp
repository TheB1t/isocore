#include <memory>
#include <csignal>

#include <app.hpp>
#include <log.hpp>

std::unique_ptr<App> app;

void sigint_handler(int signal) {
    switch (signal) {
        case SIGINT:
            LOG_INFO("Received SIGINT, exiting...");
            app->stop();
            break;

        default:
            LOG_DEBUG("Received unknown signal, exiting...");
            exit(signal);
            break;
    }
}

int main(void) {
    signal(SIGINT, sigint_handler);
    signal(SIGTERM, sigint_handler);
    signal(SIGSEGV, sigint_handler);

    app = std::make_unique<App>();
    app->run();
}