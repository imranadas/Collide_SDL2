#include <Player.h>

Player::Player(): x(0), y(0),vel_x(0),vel_y(0){;}

Player::Player(int u, int v): x(u),y(v),vel_x(0),vel_y(0) {;}

int Player::get_x(){return x;}

int Player::get_y(){return y;}

void Player::inc_vel_x(int u){vel_x += u;}

void Player::inc_vel_y(int u){vel_y += u;}


void Player::move(){
    int BUFFER = PLAYER_SIZE/2;
    if(x==WIDTH-PLAYER_SIZE/2-50){
        x-=BUFFER;
    }
    if(x==0+PLAYER_SIZE/2+50){
        x+=BUFFER;
    }
    else{
        x+=vel_x;
    }
    if(y==HEIGHT-PLAYER_SIZE/2-50){
        y-=BUFFER;
    }
    if(y==0+PLAYER_SIZE/2+50){
        y+=BUFFER;
    }
    else{
        y+=vel_y;
    }
}