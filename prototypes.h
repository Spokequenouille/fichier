#ifndef         _PROTOTYPES_H_
#define         _PROTOTYPES_H_

/*
* @brief Un t_element est un entier représentant la valeur contenue par un noeud
*/
typedef int     t_element;

/*
* @brief Une structure représentant le noeud d'un arbre.
* Il possède une valeur et deux pointeurs vers les parties gauche et droite
*/
typedef struct  s_noeud {
  t_element valeur; /* Une valeur pour distinguer l'élément de l'arbre */
  struct s_noeud *gauche; /* La partie gauche de l'arbre */
  struct s_noeud *droit; /* La partie droite de l'arbre */
} t_noeud;

/*
* @brief
* Un t_arbre est un pointeur vers un t_noeud
*/
typedef t_noeud *t_arbre;

/*
* @brief Affiche un arbre avec un décalage donné
* @param t_arbre L'arbre que l'on va afficher
* @param int Un entier représentant le décalage d'affichage
* @return void Pas de valeur de retour
*/
void        afficher_arbre(t_arbre, int);

/*
* @brief Ajoute un élément à un arbre donné
* @param t_arbre L'arbre auquel on va ajouter un élément
* @param t_element La valeur du nouveau noeud
* @return void Pas de valeur de retour
*/
void        ajouter_element(t_arbre, t_element);

/*
* @brief Retourne 1 (vrai) ou 0 (faux) si l'arbre en paramètre est vide ou non
* @param t_arbre L'arbre que l'on souhaite analyser
* @return int Retourne 1 ou 0 si l'arbre est vide ou non
*/
int         est_vide(t_arbre);

/*
* @brief Retourne le fils gauche d'un arbre donné
* @param t_arbre L'arbre dont on souhaite récupérer la partie gauche
* @return t_arbre Retourne le fils gauche
*/
t_arbre     fils_gauche(t_arbre);

/*
* @brief Retourne le fils droit d'un arbre donné
* @param t_arbre L'arbre dont on souhaite récupérer la partie droite
* @return t_arbre Retourne le fils droit
*/
t_arbre     fils_droit(t_arbre);

/*
* @brief Retourne le nombre d'étages d'un arbre
* @param t_arbre L'arbre dont on souhaite évaluer la hauteur
* @return int Retourne le nombre d'étages d'un arbre
*/
int         hauteur(t_arbre);

/*
* @brief Retourne le nombre de noeuds d'un arbre donné
* @param t_arbre L'arbre dont on souhaite compter les noeuds
* @return int Retourne le nombre de noeuds de l'arbre
*/
int         nombre_de_noeuds(t_arbre);

/*
* @brief Crée une arbre avec un nouvel élément, lié à deux arbres
* pré-existants et retourne cet arbre
* @param t_element Un entier représentant l'élément de notre nouveau noeud
* @param t_arbre Un arbre pré-existant que l'on va mettre à gauche de notre
* nouvel arbre
* @param t_arbre Un arbre pré-existant que l'on va mettre à droite de notre
* nouvel arbre
* @return t_arbre Retourne le nouvel arbre créé
*/
t_arbre     nouvel_arbre(t_element, t_arbre, t_arbre);

/*
* @brief Recherche un élément dans un arbre
* @param t_arbre L'arbre où l'on cherche
* @return int Retourne 1 vrai ou 0 faux
*/
int        rechercher_element(t_arbre, t_element);

/*
* @brief Supprime un arbre
* @param t_arbre L'arbre que l'on va supprimer
* @return void Pas de valeur de retour
*/
void        supprimer_arbre(t_arbre *);

#endif
