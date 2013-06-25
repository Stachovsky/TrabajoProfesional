#ifndef QUECASCONFIG_H
#define QUECASCONFIG_H

#define VERSION_NUMBER "1.2"

#define KEY_PASSWORD_USUARIO  "b3MXc8IpW6iKlSH7fH0wkYVt"

#define IV_PASSWORD_USUARIO   1574938342144570879

#define DATABASE_NAME   "quecas.sqlite"

#define SCRIPT_CREATE_TABLE_Usuarios "CREATE TABLE Usuarios (idUsuario INTEGER PRIMARY KEY, Usuario TEXT, Nombre TEXT, IdPerfil INTEGER, Password TEXT)"

#define SCRIPT_CREATE_TABLE_Perfiles "CREATE TABLE Perfiles (idPerfil INTEGER PRIMARY KEY, Descripcion TEXT)"

#define SCRIPT_CREATE_TABLE_Experimentos "CREATE TABLE Experimentos (IdExperimento INTEGER PRIMARY KEY autoincrement, idUsuario INTEGER, Fecha TEXT, Descripcion TEXT, Comentario TEXT, nivelCarga INTEGER, unidad TEXT, State TEXT)"

#define SCRIPT_CREATE_TABLE_Resultados "CREATE TABLE Resultados (IdMuestra INTEGER PRIMARY KEY autoincrement, IdExperimento INTEGER, Value REAL)"

#define CANTIDAD_TABLAS        4

#define PERFIL_ROOT     0
#define PERFIL_ADMIN    1
#define PERFIL_USER     2

#define CARACTER_PARCEO_CSV ","

#define TIME_SCALE_GRAFIC   5.2 /**< 1/(192.307)Khz = 5.2us */

#define NUMERO_MUESTRAS_SENSADO_DESCARGA    2500

#endif // QUECASCONFIG_H
