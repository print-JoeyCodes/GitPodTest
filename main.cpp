#include "raylib.h"

int main() {
    InitWindow(800, 450, "Raylib Gitpod Test");
    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawText("Hello, Raylib in Gitpod!", 190, 200, 20, BLACK);
        EndDrawing();
    }
    CloseWindow();
    return 0;
}