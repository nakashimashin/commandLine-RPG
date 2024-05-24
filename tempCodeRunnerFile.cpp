void Monster::action() {
    bool isAction = true;
    if (Monster::hp <= 0) { isAction = false; }
    if(isAction) {
        int dx = Game::signum(game->player->x - x);
        int dy = Game::signum(game->player->y - y);

        if (!moveTo(dx,dy)) { attackTo(dx,dy); }
    }
}