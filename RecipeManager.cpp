//
// Created by w520 on 16.06.24.
//

#include <iostream>
#include "RecipeManager.h"
void RecipeManager::addRecipe(const Recipe& recipe) {
    recipes.push_back(recipe);
}

void RecipeManager::removeRecipe(const std::string& name) {
    recipes.erase(std::remove_if(recipes.begin(), recipes.end(), [&](const Recipe& recipe) {
        return recipe.getName() == name;
    }), recipes.end());
}

std::vector<Recipe> RecipeManager::searchRecipesByIngredient(const std::string& ingredient) const {
    std::vector<Recipe> result;
    std::copy_if(recipes.begin(), recipes.end(), std::back_inserter(result), [&](const Recipe& recipe) {
        return std::find(recipe.getIngredients().begin(), recipe.getIngredients().end(), ingredient) != recipe.getIngredients().end();
    });
    return result;
}

std::vector<Recipe> RecipeManager::searchRecipesByName(const std::string& name) const {
    std::vector<Recipe> result;
    std::copy_if(recipes.begin(), recipes.end(), std::back_inserter(result), [&](const Recipe& recipe) {
        return recipe.getName() == name;
    });
    return result;
}

void RecipeManager::printRecipes() const {
    for (const auto& recipe : recipes) {
        std::cout << "Recipe: " << recipe.getName() << std::endl;
        std::cout << "Ingredients: ";
        for (const auto& ingredient : recipe.getIngredients()) {
            std::cout << ingredient << ", ";
        }
        std::cout << std::endl;
        std::cout << "Instructions: " << recipe.getInstructions() << std::endl;
        std::cout << std::endl;
    }
}