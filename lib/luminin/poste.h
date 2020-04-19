#pragma once

#include <stddef.h>

typedef struct poste
{
    size_t id;
    char titre[128];
    char competences[5][128];
    size_t id_entreprise;
} poste;

typedef struct postes
{
    struct node *tete;
} postes;

// Initialise la liste des postes.
void po_init();

// Détruit la liste des postes.
void po_destroy();

// Créer un poste.
size_t po_creer_poste(char const* const titre, char const competences[5][128], size_t const id_compagnie);

// Supprimer un poste.
void po_supprimer_poste(size_t const id);

// Cherche un poste par id.
struct poste* po_recherche(size_t const id);
