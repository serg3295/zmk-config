
// Compose combinations
#define POUND_L  &cmps MINUS L
#define EURO     &cmps EQUAL C
#define DIVISION &cmps MINUS COLON
#define SQR_ROOT &cmps V SLASH
#define UPPER_0  &cmps CARET N0
#define UPPER_1  &cmps CARET N1
#define UPPER_2  &cmps CARET N2
#define UPPER_3  &cmps CARET N3
#define NBSP     &cmps SPACE SPACE
#define ELLIPSES &cmps DOT DOT

// Tiling window manager
#define WS_1 &kp LG(PG_UP)   // switch to workspace
#define WS_2 &kp LG(PG_DN)
#define N_W  &kp LG(LC(UP))  // tile window
#define N_E  &kp LG(LC(LA(UP)))
#define S_W  &kp LG(LC(DOWN))
#define S_E  &kp LG(LC(LA(DOWN)))
#define WEST &kp LG(LC(LEFT))
#define EAST &kp LG(LC(RIGHT))
#define HIDE &kp LG(D)      // show desktop
#define MV_L &kp LG(LEFT)   // move window
#define MV_R &kp LG(RIGHT)
#define MV_U &kp LG(UP)
#define MV_D &kp LG(DOWN)

#define LANG_CS &ht_sk_kp LC(LSHIFT) RALT    // switch language or Ctrl+Shift layer
#define WSPC_SA &ht_sk_kp LS(LALT) LG(SPACE) // switch workspace or Shift+Alt layer
#define W_CAPS  &ht_caps CAPS 0  // caps_word or CAPS LOCK
#define HOVER   &ck_key LC(I)

#define NEQ_EXCL  &ht_not_eq EXCLAMATION EQUAL
#define NEQ_TILDE &ht_not_eq TILDE TILDE
#define SHEBANG &bigram HASH EXCLAMATION

#define NEXT_DIFF &ht3 LA(F3) LC(LA(RBKT))
#define PREV_DIFF &ht3 LS(LA(F3)) LC(LA(LBKT))
#define MOVE_ED_L &ht3 LC(LA(LEFT)) LC(LS(PG_UP))   // tap: move active editor left/right
#define MOVE_ED_R &ht3 LC(LA(RIGHT)) LC(LS(PG_DN))  // hold: move editor into next/previous group
#define PGUP_TAB  &ht3 LC(LS(TAB)) PG_UP
#define PGDN_TAB  &ht3 LC(TAB) PG_DN
#define COPY_LN   &ht3 LC(LA(FSLH)) LC(LA(LS(DOWN)))
#define F_BSPC    &ht3 LC(LS(BSPC)) LC(BSPC)  // del word or del all left
#define F_DEL     &ht3 LC(LS(DEL)) LC(DEL)    // del word or del all right
#define REFS      &ht3 LS(LA(F12)) LS(F12)    // referencies
#define GO_BACK   &ht3 LA(LEFT) LC(LA(MINUS))
#define GO_FWD    &ht3 LA(RIGHT) LC(LS(MINUS))

#define NEXT_ED &ht_ckk LC(PG_DN) LC(PG_DN)
#define PREV_ED &ht_ckk LC(PG_UP) LC(PG_UP)

// tap: move cursor
// hold: focus into editor group
#define JUMP_UP &ht_ckk LC(UP) LC(UP)
#define JUMP_DN &ht_ckk LC(DOWN) LC(DOWN)
#define JUMP_L  &ht_ckk LC(LEFT) LC(LEFT)
#define JUMP_R  &ht_ckk LC(RIGHT) LC(RIGHT)

// tap: select left/right/up/down
// hold: move active editor group left/right/up/down
#define ACTION_UP    &ht_ckk UP LS(UP)
#define ACTION_DOWN  &ht_ckk DOWN LS(DOWN)
#define ACTION_LEFT  &ht_ckk LEFT LS(LEFT)
#define ACTION_RIGHT &ht_ckk RIGHT LS(RIGHT)
