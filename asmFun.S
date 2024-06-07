.align 2
.global _increment

_increment:
    add x0 ,x0,#1
    mov x0,x0
    ret