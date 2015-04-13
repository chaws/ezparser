-- Database generated with pgModeler (PostgreSQL Database Modeler).
-- pgModeler  version: 0.7.1
-- PostgreSQL version: 9.1
-- Project Site: pgmodeler.com.br
-- Model Author: ---

SET check_function_bodies = false;
-- ddl-end --

-- object: ezuser | type: ROLE --
-- DROP ROLE ezuser;
--CREATE ROLE ezuser WITH ;
-- ddl-end --


-- Database creation must be done outside an multicommand file.
-- These commands were put in this file only for convenience.
-- -- object: ezparser_projectname | type: DATABASE --
-- -- DROP DATABASE ezparser_projectname;
-- CREATE DATABASE ezparser_projectname
-- 	OWNER = ezuser
-- ;
-- -- ddl-end --
-- 

-- object: public.identifier_declaration | type: TABLE --
-- DROP TABLE public.identifier_declaration;
CREATE TABLE public.identifier_declaration(
	identifier_id serial NOT NULL,
	name character varying(255),
	line integer,
	_column integer,
	scope integer,
	static bool,
	extern bool,
	function bool,
	num_pointers integer,
	num_braces integer,
	file_id_files integer NOT NULL,
	type_id_types integer,
	CONSTRAINT identifiers_pkey PRIMARY KEY (identifier_id)

);
-- ddl-end --
COMMENT ON TABLE public.identifier_declaration IS 'Stores variables names';
ALTER TABLE public.identifier_declaration OWNER TO ezuser;
-- ddl-end --

-- object: public.files | type: TABLE --
-- DROP TABLE public.files;
CREATE TABLE public.files(
	file_id serial NOT NULL,
	name character varying,
	CONSTRAINT files_pkey PRIMARY KEY (file_id)

);
-- ddl-end --
ALTER TABLE public.files OWNER TO ezuser;
-- ddl-end --

-- object: files_fk | type: CONSTRAINT --
-- ALTER TABLE public.identifier_declaration DROP CONSTRAINT files_fk;
ALTER TABLE public.identifier_declaration ADD CONSTRAINT files_fk FOREIGN KEY (file_id_files)
REFERENCES public.files (file_id) MATCH FULL
ON DELETE RESTRICT ON UPDATE CASCADE;
-- ddl-end --


-- object: public.types | type: TABLE --
-- DROP TABLE public.types;
CREATE TABLE public.types(
	type_id serial NOT NULL,
	name character varying,
	user_defined bool,
	CONSTRAINT types_pkey PRIMARY KEY (type_id)

);
-- ddl-end --
ALTER TABLE public.types OWNER TO ezuser;
-- ddl-end --

-- object: types_fk | type: CONSTRAINT --
-- ALTER TABLE public.identifier_declaration DROP CONSTRAINT types_fk;
ALTER TABLE public.identifier_declaration ADD CONSTRAINT types_fk FOREIGN KEY (type_id_types)
REFERENCES public.types (type_id) MATCH FULL
ON DELETE RESTRICT ON UPDATE CASCADE;
-- ddl-end --



