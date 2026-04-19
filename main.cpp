#include <gtkmm.h>

class MainWindow : public Gtk::Window
{
public:
    MainWindow()
    {
        set_title("Hello gtkmm");
        set_default_size(400, 300);

        m_label.set_text("Hello, World!");
        set_child(m_label);
    }

private:
    Gtk::Label m_label;
};

int main(const int argc, char* argv[])
{
    const auto app = Gtk::Application::create("org.example.hello");

    return app->make_window_and_run<MainWindow>(argc, argv);
}