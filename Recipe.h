//
// Created by w520 on 16.06.24.
//

#ifndef CLASSWORK15062024_RECIPE_H
#define CLASSWORK15062024_RECIPE_H


#include <string>
#include <vector>

class Recipe {
public:
    Recipe(const std::string& name, const std::vector<std::string>& ingredients, std::string  instructions);
    [[nodiscard]] std::string getName() const;
    [[nodiscard]] std::vector<std::string> getIngredients() const;
    [[nodiscard]] std::string getInstructions() const;

private:
    std::string name;
    std::vector<std::string> ingredients;
    std::string instructions;
};


#endif //CLASSWORK15062024_RECIPE_H
