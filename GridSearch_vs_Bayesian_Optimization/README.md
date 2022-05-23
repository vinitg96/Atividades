Link da postagem: 

# Motivação
Inspirado pelo mestre Mário Filho, especificamente por esse vídeo, o objetivo desse experimento foi comparar na prática dois métodos bastante utilizados para tunning, o Grid Search e a Bayesian Optimization ou Otimização Bayesiana.

# Métodos

- O conjunto de dados utilizados foi o California Housing Prices 
- Os hiperparâmetros escolhidos para tunning foram: "n_estimators", "max_depth", "min_sample_leaf", "max_features" e "bootstrap" de uma Random Forest.
- Os métodos usados para otimização foram o GridSearchCV (sklearn) e gp_minimize(scikit-optimize)
- O experimento foi realizado em um ambiente colab 

# Resultados Obtidos
- Os dois métodos chegaram ao mesmo conjunto de hiperparâmetros ideais.
- O Grid Search levou quase 3,2 horas enquanto a Otimização Bayesiana levou 2,3 horas