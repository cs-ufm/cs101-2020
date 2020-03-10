
---
## Ejemplo

### Menu Bienvenida

```
Ingrese Numero de Vuelo (5 caracteres): _
```


!!! info "Numero de vuelo"
    se pide que el usuario ingrese el numero de vuelo.


Se muestran las opciones del Menu principal.
<br>
```

Bienvenido al TRv1                      vuelo: AA101

1. Reservar asiento
2. Ver asiento disponibles
3. Ver Resumen.
4. Salir
```

---
### Reservar Asiento

<br>
```
Vuelo AA123

Ingrese asiento a reservar: A6

```
---

--> **Si** fuera asiento disponible



```
Asiento 'A6' reservado exitosamente!!

Presione 'Enter' para volver al menu principal
```

!!! Success "Volver"
    Volveria al [menu principal](#menu-bienvenida) (sin pedir numero de vuelo)
---

--> **Si** fuera asiento **no** disponible y volveria a pedir `"Ingrese asiento a reservar:"`


```
Asiento 'A6' ya reservado, ingrese otro asiento
```

<br>
!!! failure "Volver a pedir asiento"
    Volveria a [Reservar asiento](#reservar-asiento)

### Ver disponibilidad de Asientos

```
|   | A | B | C | D | E | F |
-----------------------------
| 1 | 0 | 0 | X | 0 | 0 | 0 |
| 2 | 0 | 0 | 0 | 0 | 0 | 0 |
| 3 | 0 | 0 | 0 | 0 | 0 | 0 |
| 4 | 0 | 0 | 0 | 0 | 0 | 0 |
.
.
.
| 32| 0 | 0 | 0 | 0 | 0 | 0 |

Presione 'Enter' para volver al menu principal.
```

### Ver Resumen


```
### RESUMEN
Reservados: 3/32 [9.4%]
Libres: 29/32 [90.6%]

```



??? info "Ya leyo todo?"
    si leyo toda esta pagina haga click [aqui](entrega.md)