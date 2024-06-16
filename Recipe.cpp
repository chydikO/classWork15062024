//
// Created by w520 on 16.06.24.
//

#include "Recipe.h"

Recipe::Recipe(const std::string& name, const std::vector<std::string>& ingredients, std::string  instructions)
        : name(name), ingredients(ingredients), instructions(std::move(instructions)) {}

std::string Recipe::getName() const {
    return name;
}

std::vector<std::string> Recipe::getIngredients() const {
    return ingredients;
}

std::string Recipe::getInstructions() const {
    return instructions;
}