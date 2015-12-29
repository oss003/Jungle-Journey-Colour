; player ---------------

left1:
        .byte $02,$0A,$2A,$0C,$3F,$0F,$03,$0A,$C8,$CA,$0A,$00,$0A,$2A,$28,$A8
        .byte $A0,$88,$AA,$FC,$FC,$FC,$F0,$A8,$A8,$28,$8F,$0F,$A8,$2A,$0A,$2A
;	defblock 16,$00
left2:
        .byte $02,$0A,$2A,$0C,$3F,$0F,$03,$0A,$08,$FA,$FA,$00,$0A,$02,$02,$0A
        .byte $A0,$88,$AA,$FC,$FC,$FC,$F0,$A8,$A8,$88,$20,$00,$A0,$A0,$A0,$A0
;	defblock 16,$00
right1:
        .byte $0A,$22,$AA,$3F,$3F,$3F,$0F,$2A,$2A,$28,$F2,$F0,$2A,$A8,$A0,$A8
        .byte $80,$A0,$A8,$30,$FC,$F0,$C0,$A0,$23,$A3,$A0,$00,$A0,$A8,$28,$2A
;	defblock 16,$00
right2:
        .byte $0A,$22,$AA,$3F,$3F,$3F,$0F,$2A,$2A,$22,$08,$00,$0A,$0A,$0A,$0A
        .byte $80,$A0,$A8,$30,$FC,$F0,$C0,$A0,$20,$AF,$AF,$00,$A0,$80,$80,$A0
;	defblock 16,$00
up1:
        .byte $0A,$2A,$AA,$3F,$3F,$3F,$0F,$2A,$AA,$CA,$0A,$00,$2A,$28,$A8,$00
        .byte $A0,$88,$AA,$FC,$FC,$FC,$F0,$A8,$AA,$A2,$A2,$00,$A0,$A8,$28,$2A
;	defblock 16,$00
up2:
        .byte $0A,$2A,$AA,$3F,$3F,$3F,$0F,$2A,$AA,$8A,$CA,$00,$0A,$2A,$28,$A8
        .byte $A0,$88,$AA,$FC,$FC,$FC,$F0,$A8,$AA,$A2,$A0,$00,$A8,$28,$2A,$00
;	defblock 16,$00
down1:
        .byte $0A,$2A,$AA,$33,$3F,$3F,$0F,$2A,$FA,$FA,$0A,$00,$2A,$28,$A8,$00
        .byte $A0,$88,$AA,$CC,$FC,$FC,$F0,$A8,$AA,$A3,$A0,$00,$A0,$A8,$28,$2A
;	defblock 16,$00
down2:
        .byte $0A,$2A,$AA,$33,$3F,$3F,$0F,$2A,$AA,$CA,$0A,$00,$0A,$2A,$28,$A8
        .byte $A0,$88,$AA,$CC,$FC,$FC,$F0,$A8,$AF,$AF,$A0,$00,$A8,$28,$2A,$00
;	defblock 16,$00
demise1:
        .byte $0A,$2A,$AA,$33,$3F,$3F,$0F,$2A,$FA,$FA,$0A,$00,$20,$82,$A2,$22
        .byte $A0,$88,$AA,$CC,$FC,$FC,$F0,$A8,$AF,$AF,$A0,$00,$88,$02,$88,$88
;	defblock 16,$00
demise2:
        .byte $0A,$2A,$AA,$00,$00,$03,$00,$22,$0A,$02,$22,$82,$8A,$82,$A2,$22
        .byte $A0,$88,$AA,$00,$F0,$C0,$A0,$80,$00,$08,$28,$02,$22,$0A,$88,$88
;	defblock 16,$00
demise3:
        .byte $0C,$03,$0F,$03,$0C,$80,$22,$0A,$02,$22,$22,$82,$8A,$82,$A2,$22
        .byte $CC,$F0,$3C,$F0,$CC,$80,$88,$0A,$28,$20,$88,$02,$22,$0A,$88,$88
;	defblock 16,$00
demise4:
        .byte $0C,$03,$0F,$03,$0C,$C0,$22,$0A,$02,$32,$22,$82,$8A,$82,$A2,$22
        .byte $CC,$F0,$FC,$F0,$CC,$80,$8C,$0B,$28,$20,$88,$02,$32,$0A,$88,$88
;	defblock 16,$00

; project ---------------------

ball1:
        .byte $05,$14,$55,$75,$55,$51,$14,$05
        .byte $50,$14,$45,$55,$5D,$55,$14,$50
ball2:
        .byte $05,$15,$51,$45,$45,$55,$17,$05
        .byte $50,$D4,$55,$51,$51,$45,$54,$50
boomerang1:
        .byte $05,$15,$54,$50,$50,$50,$10,$03
        .byte $50,$54,$00,$00,$00,$00,$0C,$C0
boomerang2:
        .byte $04,$10,$00,$00,$00,$00,$3F,$0F
        .byte $40,$0C,$0F,$0F,$0F,$3F,$FC,$F3
mace1:
        .byte $CF,$3F,$FC,$3F,$3F,$F3,$FF,$30
        .byte $3F,$FC,$3F,$CC,$FC,$FF,$FC,$C3
mace2:
        .byte $CC,$3F,$FF,$3F,$33,$FC,$3F,$CC
        .byte $33,$FC,$CF,$FC,$FC,$3F,$FC,$33
fire1:
        .byte $0D,$C0,$00,$07,$1C,$34,$07,$01
        .byte $00,$D0,$0C,$41,$33,$01,$0C,$D0
fire2:
        .byte $0F,$10,$C0,$44,$C3,$10,$07,$00
        .byte $40,$D0,$3C,$1C,$70,$00,$01,$70

; Enemies ------------------

birdld1:
        .byte $00,$00,$01,$05,$05,$05,$01,$04,$15,$75,$54,$40
        .byte $00,$50,$51,$45,$15,$54,$54,$55,$15,$45,$00,$00
        .byte $10,$40,$45,$54,$00,$14,$54,$54,$50,$40,$00,$00
;	defblock 28,$05
birdld2:
        .byte $05,$15,$15,$15,$05,$05,$01,$04,$15,$75,$54,$40
        .byte $00,$00,$00,$45,$55,$55,$54,$55,$15,$45,$01,$00
        .byte $14,$50,$55,$50,$40,$00,$00,$40,$50,$55,$55,$14
;	defblock 28,$50
birdld3:
        .byte $14,$15,$15,$15,$05,$05,$01,$04,$15,$75,$44,$04
        .byte $00,$00,$40,$45,$55,$55,$54,$55,$15,$45,$01,$00
        .byte $14,$50,$55,$50,$40,$00,$00,$40,$54,$55,$55,$15
;	defblock 28,$06
birdld4:
        .byte $04,$15,$15,$15,$05,$05,$01,$04,$15,$75,$54,$50
        .byte $00,$01,$01,$45,$55,$55,$54,$55,$15,$45,$01,$00
        .byte $50,$45,$54,$40,$00,$00,$00,$00,$40,$54,$54,$50
;	defblock 28,$60
birdrd1:
        .byte $04,$01,$51,$15,$00,$14,$15,$15,$05,$01,$00,$00
        .byte $00,$05,$45,$51,$54,$15,$15,$55,$54,$51,$00,$00
        .byte $00,$00,$40,$50,$50,$50,$40,$10,$54,$5D,$15,$01
;	defblock 28,$07
birdrd2:
        .byte $14,$05,$55,$05,$01,$00,$00,$01,$05,$55,$55,$14
        .byte $00,$00,$00,$51,$55,$55,$15,$55,$54,$51,$40,$00
        .byte $50,$54,$54,$54,$50,$50,$40,$10,$54,$5D,$15,$01
;	defblock 28,$70
birdrd3:
        .byte $14,$05,$55,$05,$01,$00,$00,$01,$15,$55,$55,$54
        .byte $00,$00,$01,$51,$55,$55,$15,$55,$54,$51,$40,$00
        .byte $14,$54,$54,$54,$50,$50,$40,$10,$54,$5D,$11,$10
;	defblock 28,$08
birdrd4:
        .byte $05,$51,$15,$01,$00,$00,$00,$00,$01,$15,$15,$05
        .byte $00,$40,$40,$51,$55,$55,$15,$55,$54,$51,$40,$00
        .byte $10,$54,$54,$54,$50,$50,$40,$10,$54,$5D,$15,$05
;	defblock 28,$80

waspld1:
        .byte $15,$40,$40,$40,$10,$05,$00,$03,$45,$15,$54,$51
        .byte $00,$40,$11,$13,$55,$DD,$75,$5D,$C4,$04,$01,$00
        .byte $01,$D4,$74,$5C,$D0,$00,$50,$04,$01,$01,$01,$54
;	defblock 28,$08
waspld2:
        .byte $01,$04,$10,$10,$10,$05,$00,$03,$45,$15,$54,$51
        .byte $00,$40,$11,$13,$55,$DD,$75,$5D,$C4,$04,$01,$00
        .byte $01,$D4,$74,$5C,$D0,$00,$50,$04,$01,$04,$50,$00
;	defblock 28,$08
waspld3:
        .byte $01,$04,$10,$10,$04,$01,$00,$03,$45,$15,$54,$51
        .byte $40,$10,$11,$13,$55,$DD,$75,$5D,$C4,$01,$00,$00
        .byte $01,$D4,$74,$5C,$D0,$00,$54,$01,$01,$04,$50,$00
;	defblock 28,$08
waspld4:
        .byte $05,$10,$10,$10,$10,$05,$00,$03,$45,$15,$54,$51
        .byte $00,$40,$11,$13,$55,$DD,$75,$5D,$C4,$04,$01,$00
        .byte $01,$D4,$74,$5C,$D0,$00,$50,$04,$01,$01,$54,$00
;	defblock 28,$08
wasprd1:
        .byte $40,$17,$1D,$35,$07,$00,$05,$10,$40,$40,$40,$15
        .byte $00,$01,$44,$C4,$55,$77,$5D,$75,$13,$10,$40,$00
        .byte $54,$01,$01,$01,$04,$50,$00,$C0,$51,$54,$15,$45
;	defblock 28,$08
wasprd2:
        .byte $40,$17,$1D,$35,$07,$00,$05,$10,$40,$10,$05,$00
        .byte $00,$01,$44,$C4,$55,$77,$5D,$75,$13,$10,$40,$00
        .byte $40,$10,$04,$04,$04,$50,$00,$C0,$51,$54,$15,$45
;	defblock 28,$08
wasprd3:
        .byte $40,$17,$1D,$35,$07,$00,$15,$40,$40,$10,$05,$00
        .byte $01,$04,$44,$C4,$55,$77,$5D,$75,$13,$40,$00,$00
        .byte $40,$10,$04,$04,$10,$40,$00,$C0,$51,$54,$15,$45
;	defblock 28,$08
wasprd4:
        .byte $40,$17,$1D,$35,$07,$00,$05,$10,$40,$40,$15,$00
        .byte $00,$01,$44,$C4,$55,$77,$5D,$75,$13,$10,$40,$00
        .byte $50,$04,$04,$04,$04,$50,$00,$C0,$51,$54,$15,$45
;	defblock 28,$08

snakeld1:
        .byte $00,$01,$07,$14,$1D,$05,$00,$14,$51,$55,$05,$04
        .byte $07,$75,$50,$00,$57,$DD,$00,$01,$5D,$D5,$00,$00
        .byte $70,$00,$00,$D0,$5C,$05,$35,$DC,$50,$00,$00,$00
;	defblock 28,$40
snakeld2:
        .byte $00,$00,$03,$01,$00,$00,$00,$14,$51,$55,$05,$04
        .byte $37,$55,$40,$71,$D7,$00,$15,$75,$51,$D0,$00,$00
        .byte $74,$50,$00,$74,$5D,$05,$03,$D5,$74,$00,$00,$00
;	defblock 28,$40
snakeld3:
        .byte $00,$05,$1D,$14,$1D,$05,$03,$14,$51,$55,$05,$04
        .byte $01,$C5,$53,$34,$05,$C3,$41,$70,$50,$C0,$40,$00
        .byte $C0,$00,$40,$70,$14,$4D,$45,$D3,$55,$1C,$00,$00
;	defblock 28,$40
snakeld4:
        .byte $00,$01,$00,$00,$00,$01,$03,$14,$51,$55,$05,$04
        .byte $5D,$D0,$5D,$00,$54,$DD,$51,$70,$54,$D4,$40,$00
        .byte $00,$00,$70,$54,$1D,$05,$43,$D5,$1C,$00,$00,$00
;	defblock 28,$40
snakerd1:
        .byte $0D,$00,$00,$07,$35,$50,$5C,$37,$05,$00,$00,$00
        .byte $D0,$5D,$05,$00,$D5,$77,$00,$40,$75,$57,$00,$00
        .byte $00,$40,$D0,$14,$74,$50,$00,$14,$45,$55,$50,$10
;	defblock 28,$40
snakerd2:
        .byte $1D,$05,$00,$1D,$75,$50,$C0,$57,$1D,$00,$00,$00
        .byte $DC,$55,$01,$4D,$D7,$00,$54,$5D,$45,$07,$00,$00
        .byte $00,$00,$C0,$40,$00,$00,$00,$14,$45,$55,$50,$10
;	defblock 28,$40
snakerd3:
        .byte $03,$00,$01,$0D,$14,$71,$51,$C7,$55,$34,$00,$00
        .byte $40,$53,$C5,$1C,$50,$C3,$41,$0D,$05,$03,$01,$00
        .byte $00,$50,$74,$14,$74,$50,$C0,$14,$45,$55,$50,$10
;	defblock 28,$40
snakerd4:
        .byte $00,$00,$0D,$15,$74,$50,$C1,$57,$34,$00,$00,$00
        .byte $75,$07,$75,$00,$15,$77,$45,$0D,$15,$17,$01,$00
        .byte $00,$40,$00,$00,$00,$40,$C0,$14,$45,$55,$50,$10
;	defblock 28,$40

lizardld1:
        .byte $00,$00,$04,$15,$10,$14,$0D,$0D,$17,$75,$54,$10
        .byte $05,$14,$04,$17,$17,$75,$75,$5C,$50,$14,$05,$01
        .byte $00,$04,$01,$5D,$5C,$C0,$50,$14,$05,$04,$40,$00
;	defblock 28,$40
lizardld2:
        .byte $00,$00,$40,$50,$40,$14,$0D,$0D,$17,$75,$54,$10
        .byte $14,$50,$14,$17,$17,$75,$75,$5C,$50,$14,$05,$01
        .byte $00,$04,$01,$5D,$5C,$C0,$40,$50,$15,$04,$40,$00
;	defblock 28,$40
lizardld3:
        .byte $00,$01,$10,$50,$10,$14,$0D,$0D,$17,$75,$54,$10
        .byte $40,$40,$50,$17,$17,$75,$75,$5C,$50,$10,$15,$04
        .byte $00,$05,$34,$5C,$50,$C0,$40,$50,$50,$14,$10,$00
;	defblock 28,$40
lizardld4:
        .byte $00,$01,$00,$40,$50,$14,$0D,$0D,$17,$75,$54,$10
        .byte $40,$50,$10,$17,$17,$75,$75,$5C,$50,$10,$15,$04
        .byte $00,$05,$34,$5C,$50,$C0,$40,$50,$15,$04,$00,$00
;	defblock 28,$40
lizardrd1:
        .byte $00,$10,$40,$75,$35,$03,$05,$14,$50,$10,$01,$00
        .byte $50,$14,$10,$D4,$D4,$5D,$5D,$35,$05,$14,$50,$40
        .byte $00,$00,$10,$54,$04,$14,$70,$70,$D4,$5D,$15,$04
;	defblock 28,$40
lizardrd2:
        .byte $00,$10,$40,$75,$35,$03,$01,$05,$54,$10,$01,$00
        .byte $14,$05,$14,$D4,$D4,$5D,$5D,$35,$05,$14,$50,$40
        .byte $00,$00,$01,$05,$01,$14,$70,$70,$D4,$5D,$15,$04
;	defblock 28,$40
lizardrd3:
        .byte $00,$50,$1C,$35,$05,$03,$01,$05,$05,$14,$04,$00
        .byte $01,$01,$05,$D4,$D4,$5D,$5D,$35,$05,$04,$54,$10
        .byte $00,$40,$04,$05,$04,$14,$70,$70,$D4,$5D,$15,$04
;	defblock 28,$40
lizardrd4:
        .byte $00,$50,$1C,$35,$05,$03,$01,$05,$54,$10,$00,$00
        .byte $01,$05,$04,$D4,$D4,$5D,$5D,$35,$05,$04,$54,$10
        .byte $00,$40,$00,$01,$05,$14,$70,$70,$D4,$5D,$15,$04
;	defblock 28,$40

beastld1:
        .byte $00,$00,$10,$15,$1D,$55,$01,$14,$00,$00,$01,$00
        .byte $00,$05,$15,$1D,$55,$55,$75,$55,$14,$14,$50,$40
        .byte $00,$51,$D4,$55,$55,$5D,$D5,$54,$50,$50,$15,$04
;	defblock 28,$40
beastld2:
        .byte $00,$10,$15,$1D,$55,$01,$14,$00,$00,$00,$00,$00
        .byte $05,$15,$1D,$55,$55,$75,$55,$14,$14,$14,$50,$10
        .byte $51,$D4,$55,$55,$5D,$D5,$54,$50,$50,$50,$14,$10
;	defblock 28,$40
beastld3:
        .byte $00,$10,$15,$1D,$55,$15,$00,$00,$00,$00,$00,$00
        .byte $05,$15,$1D,$55,$55,$75,$55,$14,$14,$14,$05,$14
        .byte $51,$D4,$55,$55,$5D,$D5,$54,$50,$50,$50,$40,$40
;	defblock 28,$40
beastld4:
        .byte $00,$10,$15,$1D,$55,$01,$14,$00,$00,$00,$00,$00
        .byte $05,$15,$1D,$55,$55,$75,$55,$14,$14,$14,$05,$04
        .byte $51,$D4,$55,$55,$5D,$D5,$54,$50,$50,$50,$14,$10
;	defblock 28,$40
beastrd1:
        .byte $00,$45,$17,$55,$55,$75,$57,$15,$05,$05,$54,$10
        .byte $00,$50,$54,$74,$55,$55,$5D,$55,$14,$14,$05,$01
        .byte $00,$00,$04,$54,$74,$55,$40,$14,$00,$00,$40,$00
;	defblock 28,$40
beastrd2:
        .byte $45,$17,$55,$55,$75,$57,$15,$05,$05,$05,$14,$04
        .byte $50,$54,$74,$55,$55,$5D,$55,$14,$14,$14,$05,$04
        .byte $00,$04,$54,$74,$55,$40,$14,$00,$00,$00,$00,$00
;	defblock 28,$40
beastrd3:
        .byte $45,$17,$55,$55,$75,$57,$15,$05,$05,$05,$01,$01
        .byte $50,$54,$74,$55,$55,$5D,$55,$14,$14,$14,$50,$14
        .byte $00,$04,$54,$74,$55,$54,$00,$00,$00,$00,$00,$00
;	defblock 28,$40
beastrd4:
        .byte $45,$17,$55,$55,$75,$57,$15,$05,$05,$05,$14,$04
        .byte $50,$54,$74,$55,$55,$5D,$55,$14,$14,$14,$50,$10
        .byte $00,$04,$54,$74,$55,$40,$14,$00,$00,$00,$00,$00
;	defblock 28,$40

emerge1:
        .byte $40,$10,$00,$00,$00,$20,$80,$00,$00,$00,$10,$04
        .byte $00,$10,$40,$00,$03,$00,$00,$00,$00,$00,$10,$04
        .byte $04,$01,$00,$00,$00,$C0,$00,$00,$00,$04,$10,$00
;	defblock 28,$40
emerge2:
        .byte $40,$10,$10,$04,$28,$88,$A0,$00,$00,$40,$14,$01
        .byte $10,$40,$10,$40,$03,$00,$00,$03,$04,$10,$10,$04
        .byte $04,$01,$04,$10,$04,$C0,$C0,$01,$04,$04,$10,$00
;	defblock 28,$40
emerge3:
        .byte $00,$40,$41,$14,$10,$88,$10,$00,$14,$40,$13,$0C
        .byte $14,$41,$00,$00,$10,$00,$30,$0F,$00,$05,$10,$00
        .byte $10,$04,$10,$40,$10,$04,$01,$04,$10,$00,$41,$04
;	defblock 28,$40
emerge4:
        .byte $00,$40,$41,$14,$10,$44,$11,$14,$41,$10,$00,$01
        .byte $14,$41,$00,$04,$10,$40,$30,$07,$00,$45,$D0,$00
        .byte $10,$44,$01,$14,$04,$01,$C4,$10,$04,$01,$44,$50
;	defblock 28,$40
explode1:
        .byte $04,$1D,$14,$05,$00,$1C,$D4,$50,$00,$03,$11,$00
        .byte $0C,$00,$40,$00,$34,$45,$1D,$04,$00,$50,$C4,$50
        .byte $00,$14,$CD,$51,$07,$00,$10,$00,$04,$11,$07,$00
;	defblock 28,$40
explode2:
        .byte $01,$05,$11,$07,$01,$15,$45,$5D,$14,$01,$00,$10
        .byte $00,$41,$5D,$45,$71,$55,$D7,$05,$54,$44,$50,$30
        .byte $50,$74,$15,$15,$54,$40,$50,$1C,$57,$45,$14,$00
;	defblock 28,$40
explode3:
        .byte $04,$15,$51,$40,$11,$05,$10,$4D,$14,$05,$04,$41
        .byte $30,$01,$44,$51,$40,$11,$4D,$14,$05,$11,$54,$C0
        .byte $10,$5C,$C5,$01,$45,$51,$40,$10,$44,$01,$4C,$10
;	defblock 28,$40
explode4:
        .byte $C0,$04,$00,$C4,$11,$04,$10,$0C,$00,$43,$04,$01
        .byte $00,$10,$44,$30,$03,$10,$01,$10,$00,$05,$C0,$03
        .byte $40,$01,$10,$44,$30,$01,$00,$04,$11,$0C,$10,$00
;	defblock 28,$40


; weapons -----------------------

weapons1:
        .byte $00,$01,$01,$11,$51,$50,$14,$05,$C0,$74,$1D,$03
        .byte $55,$41,$54,$55,$55,$55,$00,$55,$55,$00,$DD,$77
        .byte $00,$40,$40,$44,$45,$05,$14,$50,$01,$37,$DC,$40
;	defblock 28,$33
weapons2:
        .byte $00,$00,$10,$54,$55,$15,$05,$01,$00,$00,$00,$02
        .byte $02,$00,$20,$00,$00,$41,$55,$55,$55,$10,$00,$00
        .byte $00,$08,$00,$00,$14,$55,$55,$50,$00,$00,$80,$00
;	defblock 28,$04
weapons3:
        .byte $CC,$3F,$FF,$3D,$CC,$00,$00,$0A,$22,$88,$A0,$00
        .byte $C2,$00,$C0,$01,$54,$00,$80,$00,$00,$01,$05,$05
        .byte $00,$00,$50,$04,$04,$01,$01,$05,$14,$50,$40,$02
;	defblock 28,$44
weapons4:
        .byte $C0,$03,$04,$11,$44,$43,$50,$5C,$15,$05,$C5,$30
        .byte $C0,$75,$FC,$77,$DF,$F7,$DD,$7F,$00,$55,$55,$55
        .byte $0C,$40,$10,$44,$D1,$41,$C5,$05,$54,$50,$53,$00
;	defblock 28,$05

; Treasure ----------------------

key:
        .byte $03,$0F,$0C,$30,$30,$C0,$C0,$30,$30,$0C,$0F,$03
        .byte $00,$C0,$C0,$30,$3F,$0D,$0F,$30,$30,$C0,$C0,$00
        .byte $00,$00,$00,$00,$FF,$57,$FF,$C7,$4F,$C3,$00,$00
;	defblock 28,$11
chest:
        .byte $01,$04,$1F,$71,$55,$55,$50,$50,$10,$55,$55,$15
        .byte $55,$F4,$43,$3C,$55,$45,$55,$55,$55,$55,$54,$55
        .byte $40,$D0,$44,$FD,$55,$55,$04,$05,$05,$55,$55,$54
;	defblock 28,$11
statue:
        .byte $00,$3C,$C0,$FC,$FF,$3F,$03,$08,$00,$83,$0F,$3C
        .byte $03,$30,$FC,$3C,$C3,$FF,$FF,$3F,$FF,$C3,$00,$00
        .byte $C0,$3C,$3C,$FC,$F0,$C2,$00,$08,$C0,$F0,$F0,$3C
;	defblock 28,$11
jewel:
        .byte $08,$00,$80,$03,$01,$01,$05,$00,$01,$00,$00,$20
        .byte $10,$44,$45,$4D,$47,$C5,$44,$11,$71,$14,$04,$01
        .byte $08,$00,$02,$40,$50,$D4,$04,$50,$50,$40,$40,$08
;	defblock 28,$11
health:
        .byte $23,$0C,$07,$55,$05,$50,$57,$5D,$5D,$1D,$01,$00
        .byte $C3,$77,$FF,$7D,$D7,$D5,$04,$51,$51,$51,$51,$10
        .byte $C8,$30,$D0,$55,$D0,$C5,$75,$75,$75,$74,$40,$00
;	defblock 28,$11
