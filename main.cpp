#include<iostream>
#include<string>
#include<SFML/Graphics.hpp>
#include<vector>
#include"Graph.hpp"
using namespace std;



int main() {
	sf::ContextSettings sets;
	sets.antialiasingLevel = 8; 
	sf::RenderWindow win(sf::VideoMode(800, 566), "Graph", sf::Style::Default, sets);
	win.setFramerateLimit(60);
	Graph g;
	g.ShortestPath(5,1);
	while (win.isOpen()) {
		sf::Event event;
		while (win.pollEvent(event)) {
			if (event.type == sf::Event::Closed) win.close();
		}
		win.clear(sf::Color::White);
		for (auto i : g.getDrawVertices()) win.draw(i);
		win.draw(g.getDrawEdges());
		win.display();
	}





	return 0;
}
