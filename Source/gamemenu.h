/**
 * @file gamemenu.h
 *
 * Interface of the in-game menu functions.
 */
#pragma once

namespace devilution {

void gamemenu_on();
void gamemenu_off();
void gamemenu_handle_previous();
#ifndef NOEXIT
void gamemenu_quit_game(bool bActivate);
#endif
void gamemenu_load_game(bool bActivate);
void gamemenu_save_game(bool bActivate);

} // namespace devilution
