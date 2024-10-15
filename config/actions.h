/* actions.h */

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
#define WS_1 &kp LG(PG_UP)  // switch to workspace
#define WS_2 &kp LG(PG_DN)
#define N_W  &kp LG(LC(UP)) // tile window
#define N_E  &kp LG(LC(LA(UP)))
#define S_W  &kp LG(LC(DOWN))
#define S_E  &kp LG(LC(LA(DOWN)))
#define WEST &kp LG(LC(LEFT))
#define EAST &kp LG(LC(RIGHT))
#define HIDE &kp LA(F9)     // minimize window
#define MV_L &kp LG(LEFT)   // move window
#define MV_R &kp LG(RIGHT)
#define MV_U &kp LG(UP)
#define MV_D &kp LG(DOWN)

#define MSE_COMP &mo_sl MOUSE COMP
#define LANG_CS  &ht_sk_kp LC(LSHIFT) RALT    // switch language or Ctrl+Shift layer
#define W_CAPS   &ht_caps CAPS 0  // caps_word or CAPS LOCK
#define HOVER    &ck_key LC(I)

// Symbols
#define NEQ_EXCL  &ht_not_eq EXCLAMATION EQUAL
#define NEQ_TILDE &ht_not_eq TILDE TILDE
#define SHEBANG   &bigram HASH EXCLAMATION
#define DBL_COLON &bigram COLON COLON
#define AMPS_RU   &ht_ru N7 AMPERSAND
#define HASH_RU   &ht_ru N3 HASH
#define AT_RU     &ht_ru N2 AT_SIGN
#define DLLR_RU   &ht_ru N4 DOLLAR
#define CARET_RU  &ht_ru N6 CARET
#define LBRC_RU   &ht_ru LEFT_BRACE LEFT_BRACE
#define RBRC_RU   &ht_ru RIGHT_BRACE RIGHT_BRACE
#define LT_RU     &ht_ru LESS_THAN LESS_THAN
#define GT_RU     &ht_ru GREATER_THAN GREATER_THAN
#define LBKT_RU   &ht_ru2 LEFT_BRACKET LEFT_BRACKET
#define RBKT_RU   &ht_ru2 RIGHT_BRACKET RIGHT_BRACKET
#define FSLH_RU   &ht_ru2 SLASH SLASH
#define PIPE_RU   &ht_ru2 PIPE PIPE

#define NEXT_DIFF &ht3 LA(F3) LC(LA(RBKT))
#define PREV_DIFF &ht3 LS(LA(F3)) LC(LA(LBKT))
#define COPY_LN   &ht3 LC(LA(FSLH)) LC(LA(LS(DOWN)))
#define F_BSPC    &ht3 LC(LS(BSPC)) LC(BSPC)  // del word or del all left
#define F_DEL     &ht3 LC(LS(DEL)) LC(DEL)    // del word or del all right
#define REFS      &ht3 LS(LA(F12)) LS(F12)    // referencies
#define GO_BACK   &ht3 LC(LA(MINUS)) LA(LEFT)
#define GO_FWD    &ht3 LC(LS(MINUS)) LA(RIGHT)

// tap: open next/previous editor in group
// hold: open next/previous editor
#define NEXT_ED &ht_ckk LC(PG_DN) LC(PG_DN)
#define PREV_ED &ht_ckk LC(PG_UP) LC(PG_UP)

// tap: move cursor (with 'ctrl' prefix)
// hold: focus into editor group
#define JUMP_UP &ht_ckk LC(UP) LC(UP)
#define JUMP_DN &ht_ckk LC(DOWN) LC(DOWN)
#define JUMP_L  &ht_ckk LC(LEFT) LC(LEFT)
#define JUMP_R  &ht_ckk LC(RIGHT) LC(RIGHT)

// tap: change all occurrences of current word
// hold: select all occurrences of Find Match/All Matches
#define SEL_ALL &ht3 LC(LS(L)) LC(F2)

// tap: move active editor left/right
// hold: move editor into next/previous group
#define MOVE_ED_L &ht3 LC(LA(LEFT)) LC(LS(PG_UP))
#define MOVE_ED_R &ht3 LC(LA(RIGHT)) LC(LS(PG_DN))

// tap: select right
// hold: select to bracket
#define SELECT_BRKT &ht3 LS(LA(M)) LS(RIGHT)

// tap:  move Editor into New window
// hold: move Editor group into New window
#define MV_AUX_WIN &ht_ck_ck LC(LA(LEFT_ARROW)) LC(LA(RIGHT_ARROW))

// tap:  View: Terminal toggle
// hold: Terminal: Focus Terminal Tabs View
#define VSTERM &ht3 LC(LS(BSLH)) LC(GRAVE)

// tap:  Mate terminal
// hold: Double Commander terminal
#define TERM &ht3 F9 LC(LA(T))
