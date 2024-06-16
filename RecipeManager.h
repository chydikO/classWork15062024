//
// Created by w520 on 16.06.24.
//

#ifndef CLASSWORK15062024_RECIPEMANAGER_H
#define CLASSWORK15062024_RECIPEMANAGER_H

#include <vector>
#include <algorithm>
#include "Recipe.h"

class RecipeManager {
public:
    void addRecipe(const Recipe& recipe);
    void removeRecipe(const std::string& name);
    [[nodiscard]] std::vector<Recipe> searchRecipesByIngredient(const std::string& ingredient) const;
    [[nodiscard]] std::vector<Recipe> searchRecipesByName(const std::string& name) const;
    void printRecipes() const;

private:
    std::vector<Recipe> recipes;
};


#endif //CLASSWORK15062024_RECIPEMANAGER_H
