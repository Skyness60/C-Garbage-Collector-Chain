# Garbage Collector en C utilisant une liste chaînée

Ce projet implémente un Garbage Collector (GC) en C utilisant une liste chaînée. Ce collecteur permet d’ajouter, de supprimer et de libérer des pointeurs afin de prévenir les fuites de mémoire, assurant ainsi une gestion optimisée des ressources.


## Fonctionnalités

- **Ajout de Pointeurs** : 
  - La fonction `add_ptr` ajoute un pointeur au collecteur. Chaque pointeur est stocké dans un élément de la liste chaînée. Si le tableau interne atteint sa capacité maximale, le collecteur redimensionne automatiquement la lis
  - `add_ptr_tab`  ajoute un tableau de pointeurs à la liste chaînée.

- **Vérification de Pointeurs** : 
  - La fonction `is_ptr_in_trash` vérifie si un pointeur donné est déjà présent dans la liste chaînée des pointeurs gérés.

- **Libération de Mémoire** : 
  - `free_all` libère tous les pointeurs stockés dans le collecteur. La liste chaînée est réinitialisée, ce qui permet de libérer efficacement toute la mémoire allouée.

- **Initialisation** : 
  - `init_garbage_collector` initialise le collecteur avec une capacité de stockage initiale spécifiée pour la liste chaînée.

- **Suppression de Pointeurs** : 
  - `remove_ptr` supprime un pointeur spécifique de la liste chaînée. Si le nombre de pointeurs dans la liste descend sous un certain seuil, la liste est redimensionnée pour optimiser l’utilisation de la mémoire.

- **Debugging** : 
  - `debug_gc` affiche l'état actuel du collecteur, y compris la capacité, le nombre d'éléments dans la liste chaînée et la liste des pointeurs stockés.

## Init Makefile for your project

```M̀akefile
LINKLIBS = -L./garbage_collector_chain -lgarbage_collector_chain
```
```M̀akefile
$(NAME) : $(OBJ)
	@make -C ./garbage_collector_chain --no-print-directory
 ```
```M̀akefile
fclean:	clean
@make fclean -C ./garbage_collector_chain --no-print-directory
```
