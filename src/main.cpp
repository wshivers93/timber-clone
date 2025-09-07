#include <SFML/Graphics.hpp>
using namespace sf;

int main()
{
    auto window = RenderWindow(VideoMode({1920u, 1080u}), "Timber Clone");
    window.setFramerateLimit(144);

    while (window.isOpen())
    {
        // user input
        if (Keyboard::isKeyPressed(Keyboard::Scan::Escape))
        {
           window.close(); 
        }

        // update

        // draw

        // below is process called Double Buffering
        window.clear(); // removes previous frame
        window.display(); // flip to new frame
    }
}
