enum komainf{
    empty = 0,
    fu = 1,
    kyosya,
    keima,
    gin,
    kin,
    kaku,
    hisya,
    gyoku,
    tokin,
    nari_kyou,
    nari_kei,
    nari_gin,
    dummy,
    uma,
    ryu,
    promoted = tokin - fu,
    koma_mask = 0x0f,
    own_mask = 0x10,
    own_fu = fu + own_mask,
    own_kyosya,
    own_keima,
    own_gin,
    own_kin,
    own_kaku,
    own_hisya,
    own_gyoku,
    own_tokin,
    own_nari_kyou,
    own_nari_kei,
    own_nari_gin,
    own_dummy,
    own_uma,
    own_ryu,
    opponent_mask = 0x20,
    opp_fi = fu + opponent_mask,
    opp_kyosya,
    opp_keima,
    opp_gin,
    opp_kin,
    opp_kaku,
    opp_hisya,
    opp_gyoku,
    opp_tokin,
    opp_nari_kyou,
    opp_nari_kei,
    opp_nari_gin,
    opp_uma,
    opp_ryu,
    wall = 0x80
    };

typedef unsigned char komainfo;
inline int is_enemy(komainfo koma){
    return (koma & enemy);
}
inline int inself(int sengo,komainfo koma){
    if(sengo==0){
        inself(koma);
    } else{
        is_enemy(koma);
    }
}

class situation{
    protected:
    komainfo board[11][11];
    int hand[2][hi+1];
};

char *komaStr[] = {
    "   ", " 歩", " 香", " 桂", " 銀", " 金", " 角", " 飛", " 玉", " と", " 杏", " 圭", " 全", " 金", " 馬", " 竜",
    "   ", "v歩", "v香", "v桂", "v銀", "v金", "v角", "v飛", "v王", "vと", "v杏", "v圭", "v全", "v金", "v馬", "v竜"
    };

void situation::Print(){
    int dan,suji;
    int koma;
}