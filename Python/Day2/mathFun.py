import cmath

z = 1 + 1j
angle = cmath.phase(z)
print(angle)  # ≈ 0.785 (which is π/4 radians)


r, phi = cmath.polar(z)
print("r:", r)        # ≈ 1.4142 (sqrt(2))
print("phi:", phi)    # ≈ 0.7854 (π/4)


r = 2
phi = cmath.pi / 4
z = cmath.rect(r, phi)
print(z)  # ≈ (1.4142+1.4142j)
