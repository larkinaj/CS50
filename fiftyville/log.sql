-- Keep a log of any SQL queries you execute as you solve the mystery.

-- Used to check the tables in the db
.tables
--Used to check the schema of crime_scene_reports
.schema crime_scene_reports
--Used to check the crime scene report for the duck theft incident
SELECT description FROM crime_scene_reports WHERE month = 7 AND day = 28 AND street = "Humphrey Street"