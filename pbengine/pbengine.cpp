#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>

bool initEngine(sf::RenderWindow& window) {
    sf::Font font;
    #ifdef _WIN32
    if (!font.loadFromFile("/usr/share/fonts/truetype/msttcorefonts/comicbd.ttf")) {
        return 0;
    }
    #endif
    #ifdef linux
    if (!font.loadFromFile("C:/Windows/Fonts/comicbd.ttf")) { // /usr/share/fonts/truetype/msttcorefonts/comicbd.ttf
        return 0;
    }
    #endif
    sf::Text text;
    text.setFont(font);
    text.setString("Hello World");
    text.setCharacterSize(24);
    text.setFillColor(sf::Color::White);
    text.setStyle(sf::Text::Underlined);
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        window.clear();
        window.draw(text);
        window.display();
    }
    //window.draw(text);
    return 1;
}
