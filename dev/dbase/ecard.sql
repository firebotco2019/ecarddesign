BEGIN TRANSACTION;
CREATE TABLE IF NOT EXISTS "usuarios" (
	"id"	INTEGER NOT NULL UNIQUE,
	"nombres"	TEXT NOT NULL,
	"apellidos"	TEXT NOT NULL,
	"correo"	TEXT NOT NULL UNIQUE,
	"usuario"	TEXT NOT NULL UNIQUE,
	"clave"	TEXT NOT NULL,
	PRIMARY KEY("id" AUTOINCREMENT)
);
INSERT INTO "usuarios" VALUES (1,'Alexander','Rubio Cáceres','ceo@firebot.co','cosmodev','.cosmo1.');
INSERT INTO "usuarios" VALUES (2,'Mariana Alexandra','Rodriguez Garzón','86.marianarodriguez@gmail.com','mrodriguez','.mrodriguez1.');
COMMIT;
