#pragma once
#include<fstream>
#include<iostream>
#include "trainer.h"
#include<vector>

using namespace std;
void exportInfo(vector<sportsman> Sportsmans,vector<lecturer> Lecturers, vector<trainer> Trainers);

void ExportSportsmanData(sportsman Sportsman,ofstream &fout);
void ExportLecturerData(lecturer Lecturer,ofstream &fout);
void ExportTrainerData(trainer Trainer,ofstream &fout);
