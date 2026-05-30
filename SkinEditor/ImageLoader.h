#pragma once
#include <SDL3/SDL.h>
#include "imgui/imgui.h"
#include "stb_image.h"

bool LoadTextureFromMemory(const void* data, size_t data_size, SDL_Renderer* renderer, SDL_Texture** out_texture, int* out_width, int* out_height);
bool LoadTextureFromRawMemory(const void* data, SDL_Renderer* renderer, SDL_Texture** out_texture, int width, int height, int channels);
bool LoadTextureFromFile(const char* file_name, SDL_Renderer* renderer, SDL_Texture** out_texture, int* out_width, int* out_height);