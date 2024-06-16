#include <memory>
#include <iostream>
#include "RecipeManager.h"

int main() {
    RecipeManager recipeManager;

    // Добавление рецептов
    Recipe recipe1("Пирожок", {"тесто", "мясо", "лук"}, "1. Замесить тесто. 2. Приготовить начинку. 3. Сформировать пирожки. 4. Выпекать в духовке.");
    Recipe recipe2("Салат", {"помидоры", "огурцы", "лук", "масло"}, "1. Нарезать овощи. 2. Смешать все ингредиенты. 3. Полить маслом.");
    Recipe recipe3("Картофельное пюре", {"картофель", "молоко", "масло"}, "1. Сварить картофель. 2. Размять картофель. 3. Добавить молоко и масло. 4. Перемешать.");

    recipeManager.addRecipe(recipe1);
    recipeManager.addRecipe(recipe2);
    recipeManager.addRecipe(recipe3);

    // Вывод всех рецептов
    std::cout << "Все рецепты:" << std::endl;
    recipeManager.printRecipes();
    std::cout << std::endl;

    // Поиск рецептов по ингредиенту
    std::string ingredient = "лук";
    std::vector<Recipe> recipesWithIngredient = recipeManager.searchRecipesByIngredient(ingredient);
    std::cout << "Рецепты с ингредиентом \"" << ingredient << "\":" << std::endl;
    for (const auto& recipe : recipesWithIngredient) {
        std::cout << "- " << recipe.getName() << std::endl;
    }
    std::cout << std::endl;

    // Поиск рецептов по названию
    std::string name = "Салат";
    std::vector<Recipe> recipesWithName = recipeManager.searchRecipesByName(name);
    std::cout << "Рецепты с названием \"" << name << "\":" << std::endl;
    for (const auto& recipe : recipesWithName) {
        std::cout << "- " << recipe.getName() << std::endl;
    }
    std::cout << std::endl;

    // Удаление рецепта
    std::string recipeNameToRemove = "Пирожок";
    recipeManager.removeRecipe(recipeNameToRemove);
    std::cout << "Рецепт \"" << recipeNameToRemove << "\" удален." << std::endl;
    std::cout << std::endl;

    // Вывод всех рецептов после удаления
    std::cout << "Все рецепты после удаления:" << std::endl;
    recipeManager.printRecipes();
    std::cout << std::endl;

    return 0;
}
