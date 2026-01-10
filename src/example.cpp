#include "raylib.h"

int main(){
    // -- Setup window --
    SetConfigFlags(FLAG_VSYNC_HINT);
    InitWindow(960, 720, "Example");
    // -- Render loop --
    while(!WindowShouldClose()){
        ClearBackground(WHITE);
        BeginDrawing();
        DrawFPS(0,0);
        EndDrawing();
    }
    // -- Cleanup --
    CloseWindow();
}
