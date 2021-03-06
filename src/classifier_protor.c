#include "classifier.h"

/* Autogenerated code from the script config2c.pl */

static const char *protor_residue_name[] = {"A", "ACE", "ALA", "ARG", "ASN", "ASP", "ASX", "C", "CYS", "DA", "DC", "DG", "DI", "DT", "DU", "G", "GLN", "GLU", "GLX", "GLY", "HIS", "HOH", "I", "ILE", "LEU", "LYS", "MET", "NH2", "PHE", "PRO", "PYL", "SEC", "SER", "T", "THR", "TRP", "TYR", "U", "VAL", };
static const char *protor_class_name[] = {"Apolar", "Polar", "Water", };

static const char *protor_A_atom_name[] = {"O4'", "OP1", "OP3", "C5'", "N1", "C5", "N6", "C8", "N9", "C2", "N3", "O2'", "P", "O3'", "C4'", "N7", "C6", "OP2", "C2'", "O5'", "C1'", "C3'", "C4", };
static double protor_A_atom_radius[] = {1.46, 1.42, 1.46, 1.88, 1.64, 1.61, 1.64, 1.76, 1.64, 1.76, 1.64, 1.46, 1.8, 1.46, 1.88, 1.64, 1.61, 1.46, 1.88, 1.46, 1.88, 1.88, 1.61, };
static int protor_A_atom_class[] = {1, 1, 1, 0, 1, 0, 1, 0, 1, 0, 1, 1, 1, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0, };
static struct classifier_residue protor_A_cfg = {
    .name = "A", .n_atoms = 23,
    .atom_name = (char**) protor_A_atom_name,
    .atom_radius = (double*) protor_A_atom_radius,
    .atom_class = (int*) protor_A_atom_class };

static const char *protor_ACE_atom_name[] = {"C", "O", "CH3", };
static double protor_ACE_atom_radius[] = {1.76, 1.42, 1.88, };
static int protor_ACE_atom_class[] = {0, 1, 0, };
static struct classifier_residue protor_ACE_cfg = {
    .name = "ACE", .n_atoms = 3,
    .atom_name = (char**) protor_ACE_atom_name,
    .atom_radius = (double*) protor_ACE_atom_radius,
    .atom_class = (int*) protor_ACE_atom_class };

static const char *protor_ALA_atom_name[] = {"N", "OXT", "CA", "O", "CB", "C", };
static double protor_ALA_atom_radius[] = {1.64, 1.46, 1.88, 1.42, 1.88, 1.61, };
static int protor_ALA_atom_class[] = {1, 1, 0, 1, 0, 0, };
static struct classifier_residue protor_ALA_cfg = {
    .name = "ALA", .n_atoms = 6,
    .atom_name = (char**) protor_ALA_atom_name,
    .atom_radius = (double*) protor_ALA_atom_radius,
    .atom_class = (int*) protor_ALA_atom_class };

static const char *protor_ARG_atom_name[] = {"C", "NH1", "CD", "CG", "CB", "OXT", "NH2", "CZ", "NE", "N", "O", "CA", };
static double protor_ARG_atom_radius[] = {1.61, 1.64, 1.88, 1.88, 1.88, 1.46, 1.64, 1.61, 1.64, 1.64, 1.42, 1.88, };
static int protor_ARG_atom_class[] = {0, 1, 0, 0, 0, 1, 1, 0, 1, 1, 1, 0, };
static struct classifier_residue protor_ARG_cfg = {
    .name = "ARG", .n_atoms = 12,
    .atom_name = (char**) protor_ARG_atom_name,
    .atom_radius = (double*) protor_ARG_atom_radius,
    .atom_class = (int*) protor_ARG_atom_class };

static const char *protor_ASN_atom_name[] = {"CG", "C", "OD1", "N", "OXT", "ND2", "CB", "CA", "O", };
static double protor_ASN_atom_radius[] = {1.61, 1.61, 1.42, 1.64, 1.46, 1.64, 1.88, 1.88, 1.42, };
static int protor_ASN_atom_class[] = {0, 0, 1, 1, 1, 1, 0, 0, 1, };
static struct classifier_residue protor_ASN_cfg = {
    .name = "ASN", .n_atoms = 9,
    .atom_name = (char**) protor_ASN_atom_name,
    .atom_radius = (double*) protor_ASN_atom_radius,
    .atom_class = (int*) protor_ASN_atom_class };

static const char *protor_ASP_atom_name[] = {"OD2", "O", "CA", "C", "OD1", "CG", "CB", "OXT", "N", };
static double protor_ASP_atom_radius[] = {1.46, 1.42, 1.88, 1.61, 1.42, 1.61, 1.88, 1.46, 1.64, };
static int protor_ASP_atom_class[] = {1, 1, 0, 0, 1, 0, 0, 1, 1, };
static struct classifier_residue protor_ASP_cfg = {
    .name = "ASP", .n_atoms = 9,
    .atom_name = (char**) protor_ASP_atom_name,
    .atom_radius = (double*) protor_ASP_atom_radius,
    .atom_class = (int*) protor_ASP_atom_class };

static const char *protor_ASX_atom_name[] = {"CG", "XD1", "C", "OXT", "N", "CB", "XD2", "CA", "O", };
static double protor_ASX_atom_radius[] = {1.61, 1.5, 1.61, 1.46, 1.64, 1.88, 1.5, 1.88, 1.42, };
static int protor_ASX_atom_class[] = {0, 1, 0, 1, 1, 0, 1, 0, 1, };
static struct classifier_residue protor_ASX_cfg = {
    .name = "ASX", .n_atoms = 9,
    .atom_name = (char**) protor_ASX_atom_name,
    .atom_radius = (double*) protor_ASX_atom_radius,
    .atom_class = (int*) protor_ASX_atom_class };

static const char *protor_C_atom_name[] = {"OP1", "OP3", "O4'", "C5'", "N1", "C5", "C2", "O2'", "N3", "C4'", "O3'", "N4", "P", "C2'", "OP2", "C6", "O2", "C4", "C3'", "O5'", "C1'", };
static double protor_C_atom_radius[] = {1.42, 1.46, 1.46, 1.88, 1.64, 1.76, 1.61, 1.46, 1.64, 1.88, 1.46, 1.64, 1.8, 1.88, 1.46, 1.76, 1.42, 1.61, 1.88, 1.46, 1.88, };
static int protor_C_atom_class[] = {1, 1, 1, 0, 1, 0, 0, 1, 1, 0, 1, 1, 1, 0, 1, 0, 1, 0, 0, 1, 0, };
static struct classifier_residue protor_C_cfg = {
    .name = "C", .n_atoms = 21,
    .atom_name = (char**) protor_C_atom_name,
    .atom_radius = (double*) protor_C_atom_radius,
    .atom_class = (int*) protor_C_atom_class };

static const char *protor_CYS_atom_name[] = {"C", "CB", "O", "OXT", "N", "SG", "CA", };
static double protor_CYS_atom_radius[] = {1.61, 1.88, 1.42, 1.46, 1.64, 1.77, 1.88, };
static int protor_CYS_atom_class[] = {0, 0, 1, 1, 1, 1, 0, };
static struct classifier_residue protor_CYS_cfg = {
    .name = "CYS", .n_atoms = 7,
    .atom_name = (char**) protor_CYS_atom_name,
    .atom_radius = (double*) protor_CYS_atom_radius,
    .atom_class = (int*) protor_CYS_atom_class };

static const char *protor_DA_atom_name[] = {"C2", "C8", "N9", "N6", "C5", "C5'", "N1", "OP3", "OP1", "O4'", "C4", "C1'", "O5'", "C3'", "OP2", "C2'", "N7", "C6", "C4'", "P", "O3'", "N3", };
static double protor_DA_atom_radius[] = {1.76, 1.76, 1.64, 1.64, 1.61, 1.88, 1.64, 1.46, 1.42, 1.46, 1.61, 1.88, 1.46, 1.88, 1.46, 1.88, 1.64, 1.61, 1.88, 1.8, 1.46, 1.64, };
static int protor_DA_atom_class[] = {0, 0, 1, 1, 0, 0, 1, 1, 1, 1, 0, 0, 1, 0, 1, 0, 1, 0, 0, 1, 1, 1, };
static struct classifier_residue protor_DA_cfg = {
    .name = "DA", .n_atoms = 22,
    .atom_name = (char**) protor_DA_atom_name,
    .atom_radius = (double*) protor_DA_atom_radius,
    .atom_class = (int*) protor_DA_atom_class };

static const char *protor_DC_atom_name[] = {"N3", "O3'", "P", "N4", "C4'", "C6", "O2", "C2'", "OP2", "C3'", "C1'", "O5'", "C4", "O4'", "OP3", "OP1", "C5'", "N1", "C5", "C2", };
static double protor_DC_atom_radius[] = {1.64, 1.46, 1.8, 1.64, 1.88, 1.76, 1.42, 1.88, 1.46, 1.88, 1.88, 1.46, 1.61, 1.46, 1.46, 1.42, 1.88, 1.64, 1.76, 1.61, };
static int protor_DC_atom_class[] = {1, 1, 1, 1, 0, 0, 1, 0, 1, 0, 0, 1, 0, 1, 1, 1, 0, 1, 0, 0, };
static struct classifier_residue protor_DC_cfg = {
    .name = "DC", .n_atoms = 20,
    .atom_name = (char**) protor_DC_atom_name,
    .atom_radius = (double*) protor_DC_atom_radius,
    .atom_class = (int*) protor_DC_atom_class };

static const char *protor_DG_atom_name[] = {"C1'", "O5'", "C3'", "C4", "N7", "C6", "OP2", "C2'", "P", "N2", "O3'", "C4'", "N3", "C8", "N9", "C2", "O6", "C5", "N1", "C5'", "O4'", "OP3", "OP1", };
static double protor_DG_atom_radius[] = {1.88, 1.46, 1.88, 1.61, 1.64, 1.61, 1.46, 1.88, 1.8, 1.64, 1.46, 1.88, 1.64, 1.76, 1.64, 1.61, 1.42, 1.61, 1.64, 1.88, 1.46, 1.46, 1.42, };
static int protor_DG_atom_class[] = {0, 1, 0, 0, 1, 0, 1, 0, 1, 1, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 1, 1, };
static struct classifier_residue protor_DG_cfg = {
    .name = "DG", .n_atoms = 23,
    .atom_name = (char**) protor_DG_atom_name,
    .atom_radius = (double*) protor_DG_atom_radius,
    .atom_class = (int*) protor_DG_atom_class };

static const char *protor_DI_atom_name[] = {"O4'", "OP3", "OP1", "N1", "C5'", "C5", "C8", "N9", "O6", "C2", "N3", "P", "O3'", "C4'", "C6", "N7", "OP2", "C2'", "O5'", "C1'", "C3'", "C4", };
static double protor_DI_atom_radius[] = {1.46, 1.46, 1.42, 1.64, 1.88, 1.61, 1.76, 1.64, 1.42, 1.76, 1.64, 1.8, 1.46, 1.88, 1.61, 1.64, 1.46, 1.88, 1.46, 1.88, 1.88, 1.61, };
static int protor_DI_atom_class[] = {1, 1, 1, 1, 0, 0, 0, 1, 1, 0, 1, 1, 1, 0, 0, 1, 1, 0, 1, 0, 0, 0, };
static struct classifier_residue protor_DI_cfg = {
    .name = "DI", .n_atoms = 22,
    .atom_name = (char**) protor_DI_atom_name,
    .atom_radius = (double*) protor_DI_atom_radius,
    .atom_class = (int*) protor_DI_atom_class };

static const char *protor_DT_atom_name[] = {"OP1", "OP3", "O4'", "C5'", "N1", "C7", "C5", "C2", "O4", "N3", "C4'", "O3'", "P", "C2'", "OP2", "C6", "O2", "C4", "C3'", "O5'", "C1'", };
static double protor_DT_atom_radius[] = {1.42, 1.46, 1.46, 1.88, 1.64, 1.88, 1.61, 1.61, 1.42, 1.64, 1.88, 1.46, 1.8, 1.88, 1.46, 1.76, 1.42, 1.61, 1.88, 1.46, 1.88, };
static int protor_DT_atom_class[] = {1, 1, 1, 0, 1, 0, 0, 0, 1, 1, 0, 1, 1, 0, 1, 0, 1, 0, 0, 1, 0, };
static struct classifier_residue protor_DT_cfg = {
    .name = "DT", .n_atoms = 21,
    .atom_name = (char**) protor_DT_atom_name,
    .atom_radius = (double*) protor_DT_atom_radius,
    .atom_class = (int*) protor_DT_atom_class };

static const char *protor_DU_atom_name[] = {"C4'", "O3'", "P", "N3", "O4", "C4", "C3'", "C1'", "O5'", "C2'", "OP2", "C6", "O2", "N1", "C5'", "OP3", "OP1", "O4'", "C2", "C5", };
static double protor_DU_atom_radius[] = {1.88, 1.46, 1.8, 1.64, 1.42, 1.61, 1.88, 1.88, 1.46, 1.88, 1.46, 1.76, 1.42, 1.64, 1.88, 1.46, 1.42, 1.46, 1.61, 1.76, };
static int protor_DU_atom_class[] = {0, 1, 1, 1, 1, 0, 0, 0, 1, 0, 1, 0, 1, 1, 0, 1, 1, 1, 0, 0, };
static struct classifier_residue protor_DU_cfg = {
    .name = "DU", .n_atoms = 20,
    .atom_name = (char**) protor_DU_atom_name,
    .atom_radius = (double*) protor_DU_atom_radius,
    .atom_class = (int*) protor_DU_atom_class };

static const char *protor_G_atom_name[] = {"C6", "N7", "C2'", "OP2", "C3'", "O5'", "C1'", "C4", "N3", "O2'", "O3'", "N2", "P", "C4'", "C5", "N9", "C8", "O6", "C2", "O4'", "OP3", "OP1", "C5'", "N1", };
static double protor_G_atom_radius[] = {1.61, 1.64, 1.88, 1.46, 1.88, 1.46, 1.88, 1.61, 1.64, 1.46, 1.46, 1.64, 1.8, 1.88, 1.61, 1.64, 1.76, 1.42, 1.61, 1.46, 1.46, 1.42, 1.88, 1.64, };
static int protor_G_atom_class[] = {0, 1, 0, 1, 0, 1, 0, 0, 1, 1, 1, 1, 1, 0, 0, 1, 0, 1, 0, 1, 1, 1, 0, 1, };
static struct classifier_residue protor_G_cfg = {
    .name = "G", .n_atoms = 24,
    .atom_name = (char**) protor_G_atom_name,
    .atom_radius = (double*) protor_G_atom_radius,
    .atom_class = (int*) protor_G_atom_class };

static const char *protor_GLN_atom_name[] = {"N", "OXT", "CB", "CD", "CG", "OE1", "C", "NE2", "CA", "O", };
static double protor_GLN_atom_radius[] = {1.64, 1.46, 1.88, 1.61, 1.88, 1.42, 1.61, 1.64, 1.88, 1.42, };
static int protor_GLN_atom_class[] = {1, 1, 0, 0, 0, 1, 0, 1, 0, 1, };
static struct classifier_residue protor_GLN_cfg = {
    .name = "GLN", .n_atoms = 10,
    .atom_name = (char**) protor_GLN_atom_name,
    .atom_radius = (double*) protor_GLN_atom_radius,
    .atom_class = (int*) protor_GLN_atom_class };

static const char *protor_GLU_atom_name[] = {"O", "CA", "OE2", "CB", "OXT", "N", "C", "CD", "OE1", "CG", };
static double protor_GLU_atom_radius[] = {1.42, 1.88, 1.46, 1.88, 1.46, 1.64, 1.61, 1.61, 1.42, 1.88, };
static int protor_GLU_atom_class[] = {1, 0, 1, 0, 1, 1, 0, 0, 1, 0, };
static struct classifier_residue protor_GLU_cfg = {
    .name = "GLU", .n_atoms = 10,
    .atom_name = (char**) protor_GLU_atom_name,
    .atom_radius = (double*) protor_GLU_atom_radius,
    .atom_class = (int*) protor_GLU_atom_class };

static const char *protor_GLX_atom_name[] = {"OXT", "N", "CB", "CD", "CG", "XE1", "C", "CA", "O", "XE2", };
static double protor_GLX_atom_radius[] = {1.46, 1.64, 1.88, 1.61, 1.88, 1.5, 1.61, 1.88, 1.42, 1.5, };
static int protor_GLX_atom_class[] = {1, 1, 0, 0, 0, 1, 0, 0, 1, 1, };
static struct classifier_residue protor_GLX_cfg = {
    .name = "GLX", .n_atoms = 10,
    .atom_name = (char**) protor_GLX_atom_name,
    .atom_radius = (double*) protor_GLX_atom_radius,
    .atom_class = (int*) protor_GLX_atom_class };

static const char *protor_GLY_atom_name[] = {"C", "O", "N", "OXT", "CA", };
static double protor_GLY_atom_radius[] = {1.61, 1.42, 1.64, 1.46, 1.88, };
static int protor_GLY_atom_class[] = {0, 1, 1, 1, 0, };
static struct classifier_residue protor_GLY_cfg = {
    .name = "GLY", .n_atoms = 5,
    .atom_name = (char**) protor_GLY_atom_name,
    .atom_radius = (double*) protor_GLY_atom_radius,
    .atom_class = (int*) protor_GLY_atom_class };

static const char *protor_HIS_atom_name[] = {"CB", "ND1", "OXT", "N", "CD2", "C", "NE2", "CG", "CE1", "O", "CA", };
static double protor_HIS_atom_radius[] = {1.88, 1.64, 1.46, 1.64, 1.76, 1.61, 1.64, 1.61, 1.76, 1.42, 1.88, };
static int protor_HIS_atom_class[] = {0, 1, 1, 1, 0, 0, 1, 0, 0, 1, 0, };
static struct classifier_residue protor_HIS_cfg = {
    .name = "HIS", .n_atoms = 11,
    .atom_name = (char**) protor_HIS_atom_name,
    .atom_radius = (double*) protor_HIS_atom_radius,
    .atom_class = (int*) protor_HIS_atom_class };

static const char *protor_HOH_atom_name[] = {"O", };
static double protor_HOH_atom_radius[] = {1.46, };
static int protor_HOH_atom_class[] = {2, };
static struct classifier_residue protor_HOH_cfg = {
    .name = "HOH", .n_atoms = 1,
    .atom_name = (char**) protor_HOH_atom_name,
    .atom_radius = (double*) protor_HOH_atom_radius,
    .atom_class = (int*) protor_HOH_atom_class };

static const char *protor_I_atom_name[] = {"P", "O3'", "C4'", "N3", "O2'", "O5'", "C1'", "C3'", "C4", "C6", "N7", "OP2", "C2'", "C5'", "N1", "O4'", "OP1", "OP3", "C8", "N9", "C2", "O6", "C5", };
static double protor_I_atom_radius[] = {1.8, 1.46, 1.88, 1.64, 1.46, 1.46, 1.88, 1.88, 1.61, 1.61, 1.64, 1.46, 1.88, 1.88, 1.64, 1.46, 1.42, 1.46, 1.76, 1.64, 1.76, 1.42, 1.61, };
static int protor_I_atom_class[] = {1, 1, 0, 1, 1, 1, 0, 0, 0, 0, 1, 1, 0, 0, 1, 1, 1, 1, 0, 1, 0, 1, 0, };
static struct classifier_residue protor_I_cfg = {
    .name = "I", .n_atoms = 23,
    .atom_name = (char**) protor_I_atom_name,
    .atom_radius = (double*) protor_I_atom_radius,
    .atom_class = (int*) protor_I_atom_class };

static const char *protor_ILE_atom_name[] = {"C", "CD1", "CB", "CG2", "N", "OXT", "CG1", "O", "CA", };
static double protor_ILE_atom_radius[] = {1.61, 1.88, 1.88, 1.88, 1.64, 1.46, 1.88, 1.42, 1.88, };
static int protor_ILE_atom_class[] = {0, 0, 0, 0, 1, 1, 0, 1, 0, };
static struct classifier_residue protor_ILE_cfg = {
    .name = "ILE", .n_atoms = 9,
    .atom_name = (char**) protor_ILE_atom_name,
    .atom_radius = (double*) protor_ILE_atom_radius,
    .atom_class = (int*) protor_ILE_atom_class };

static const char *protor_LEU_atom_name[] = {"C", "CG", "CD1", "CB", "CD2", "OXT", "N", "O", "CA", };
static double protor_LEU_atom_radius[] = {1.61, 1.88, 1.88, 1.88, 1.88, 1.46, 1.64, 1.42, 1.88, };
static int protor_LEU_atom_class[] = {0, 0, 0, 0, 0, 1, 1, 1, 0, };
static struct classifier_residue protor_LEU_cfg = {
    .name = "LEU", .n_atoms = 9,
    .atom_name = (char**) protor_LEU_atom_name,
    .atom_radius = (double*) protor_LEU_atom_radius,
    .atom_class = (int*) protor_LEU_atom_class };

static const char *protor_LYS_atom_name[] = {"CD", "CG", "C", "OXT", "N", "CE", "CB", "CA", "NZ", "O", };
static double protor_LYS_atom_radius[] = {1.88, 1.88, 1.61, 1.46, 1.64, 1.88, 1.88, 1.88, 1.64, 1.42, };
static int protor_LYS_atom_class[] = {0, 0, 0, 1, 1, 0, 0, 0, 1, 1, };
static struct classifier_residue protor_LYS_cfg = {
    .name = "LYS", .n_atoms = 10,
    .atom_name = (char**) protor_LYS_atom_name,
    .atom_radius = (double*) protor_LYS_atom_radius,
    .atom_class = (int*) protor_LYS_atom_class };

static const char *protor_MET_atom_name[] = {"O", "SD", "CA", "C", "CG", "CB", "N", "OXT", "CE", };
static double protor_MET_atom_radius[] = {1.42, 1.77, 1.88, 1.61, 1.88, 1.88, 1.64, 1.46, 1.88, };
static int protor_MET_atom_class[] = {1, 1, 0, 0, 0, 0, 1, 1, 0, };
static struct classifier_residue protor_MET_cfg = {
    .name = "MET", .n_atoms = 9,
    .atom_name = (char**) protor_MET_atom_name,
    .atom_radius = (double*) protor_MET_atom_radius,
    .atom_class = (int*) protor_MET_atom_class };

static const char *protor_NH2_atom_name[] = {"N", };
static double protor_NH2_atom_radius[] = {1.64, };
static int protor_NH2_atom_class[] = {1, };
static struct classifier_residue protor_NH2_cfg = {
    .name = "NH2", .n_atoms = 1,
    .atom_name = (char**) protor_NH2_atom_name,
    .atom_radius = (double*) protor_NH2_atom_radius,
    .atom_class = (int*) protor_NH2_atom_class };

static const char *protor_PHE_atom_name[] = {"CA", "CE1", "O", "CZ", "OXT", "N", "CD2", "CB", "CD1", "CE2", "CG", "C", };
static double protor_PHE_atom_radius[] = {1.88, 1.76, 1.42, 1.76, 1.46, 1.64, 1.76, 1.88, 1.76, 1.76, 1.61, 1.61, };
static int protor_PHE_atom_class[] = {0, 0, 1, 0, 1, 1, 0, 0, 0, 0, 0, 0, };
static struct classifier_residue protor_PHE_cfg = {
    .name = "PHE", .n_atoms = 12,
    .atom_name = (char**) protor_PHE_atom_name,
    .atom_radius = (double*) protor_PHE_atom_radius,
    .atom_class = (int*) protor_PHE_atom_class };

static const char *protor_PRO_atom_name[] = {"CA", "O", "OXT", "N", "CB", "CG", "CD", "C", };
static double protor_PRO_atom_radius[] = {1.88, 1.42, 1.46, 1.64, 1.88, 1.88, 1.88, 1.61, };
static int protor_PRO_atom_class[] = {0, 1, 1, 1, 0, 0, 0, 0, };
static struct classifier_residue protor_PRO_cfg = {
    .name = "PRO", .n_atoms = 8,
    .atom_name = (char**) protor_PRO_atom_name,
    .atom_radius = (double*) protor_PRO_atom_radius,
    .atom_class = (int*) protor_PRO_atom_class };

static const char *protor_PYL_atom_name[] = {"CA2", "CB", "CE", "CD2", "C2", "C", "NZ", "CB2", "CA", "CG2", "OXT", "N", "O2", "CD", "CE2", "CG", "O", "N2", };
static double protor_PYL_atom_radius[] = {1.88, 1.88, 1.88, 1.88, 1.61, 1.61, 1.64, 1.88, 1.88, 1.88, 1.46, 1.64, 1.42, 1.88, 1.76, 1.88, 1.42, 1.64, };
static int protor_PYL_atom_class[] = {0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, };
static struct classifier_residue protor_PYL_cfg = {
    .name = "PYL", .n_atoms = 18,
    .atom_name = (char**) protor_PYL_atom_name,
    .atom_radius = (double*) protor_PYL_atom_radius,
    .atom_class = (int*) protor_PYL_atom_class };

static const char *protor_SEC_atom_name[] = {"C", "CB", "O", "OXT", "SE", "N", "CA", };
static double protor_SEC_atom_radius[] = {1.61, 1.88, 1.42, 1.46, 1.9, 1.64, 1.88, };
static int protor_SEC_atom_class[] = {0, 0, 1, 1, 1, 1, 0, };
static struct classifier_residue protor_SEC_cfg = {
    .name = "SEC", .n_atoms = 7,
    .atom_name = (char**) protor_SEC_atom_name,
    .atom_radius = (double*) protor_SEC_atom_radius,
    .atom_class = (int*) protor_SEC_atom_class };

static const char *protor_SER_atom_name[] = {"CA", "OXT", "N", "CB", "O", "OG", "C", };
static double protor_SER_atom_radius[] = {1.88, 1.46, 1.64, 1.88, 1.42, 1.46, 1.61, };
static int protor_SER_atom_class[] = {0, 1, 1, 0, 1, 1, 0, };
static struct classifier_residue protor_SER_cfg = {
    .name = "SER", .n_atoms = 7,
    .atom_name = (char**) protor_SER_atom_name,
    .atom_radius = (double*) protor_SER_atom_radius,
    .atom_class = (int*) protor_SER_atom_class };

static const char *protor_T_atom_name[] = {"C1'", "O5'", "C3'", "C4", "O2", "C6", "OP2", "C2'", "P", "O3'", "C4'", "O4", "N3", "C2", "C7", "C5", "C5'", "N1", "O4'", "OP1", "OP3", };
static double protor_T_atom_radius[] = {1.88, 1.46, 1.88, 1.61, 1.42, 1.76, 1.46, 1.88, 1.8, 1.46, 1.88, 1.42, 1.64, 1.61, 1.88, 1.61, 1.88, 1.64, 1.46, 1.42, 1.46, };
static int protor_T_atom_class[] = {0, 1, 0, 0, 1, 0, 1, 0, 1, 1, 0, 1, 1, 0, 0, 0, 0, 1, 1, 1, 1, };
static struct classifier_residue protor_T_cfg = {
    .name = "T", .n_atoms = 21,
    .atom_name = (char**) protor_T_atom_name,
    .atom_radius = (double*) protor_T_atom_radius,
    .atom_class = (int*) protor_T_atom_class };

static const char *protor_THR_atom_name[] = {"OG1", "O", "CA", "C", "CB", "CG2", "N", "OXT", };
static double protor_THR_atom_radius[] = {1.46, 1.42, 1.88, 1.61, 1.88, 1.88, 1.64, 1.46, };
static int protor_THR_atom_class[] = {1, 1, 0, 0, 0, 0, 1, 1, };
static struct classifier_residue protor_THR_cfg = {
    .name = "THR", .n_atoms = 8,
    .atom_name = (char**) protor_THR_atom_name,
    .atom_radius = (double*) protor_THR_atom_radius,
    .atom_class = (int*) protor_THR_atom_class };

static const char *protor_TRP_atom_name[] = {"CZ3", "NE1", "CH2", "CA", "O", "CE2", "CE3", "CG", "CD1", "C", "CZ2", "N", "OXT", "CD2", "CB", };
static double protor_TRP_atom_radius[] = {1.76, 1.64, 1.76, 1.88, 1.42, 1.61, 1.76, 1.61, 1.76, 1.61, 1.76, 1.64, 1.46, 1.61, 1.88, };
static int protor_TRP_atom_class[] = {0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, };
static struct classifier_residue protor_TRP_cfg = {
    .name = "TRP", .n_atoms = 15,
    .atom_name = (char**) protor_TRP_atom_name,
    .atom_radius = (double*) protor_TRP_atom_radius,
    .atom_class = (int*) protor_TRP_atom_class };

static const char *protor_TYR_atom_name[] = {"OH", "OXT", "CD2", "CZ", "N", "CB", "CD1", "CE2", "CG", "C", "CA", "CE1", "O", };
static double protor_TYR_atom_radius[] = {1.46, 1.46, 1.76, 1.61, 1.64, 1.88, 1.76, 1.76, 1.61, 1.61, 1.88, 1.76, 1.42, };
static int protor_TYR_atom_class[] = {1, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, };
static struct classifier_residue protor_TYR_cfg = {
    .name = "TYR", .n_atoms = 13,
    .atom_name = (char**) protor_TYR_atom_name,
    .atom_radius = (double*) protor_TYR_atom_radius,
    .atom_class = (int*) protor_TYR_atom_class };

static const char *protor_U_atom_name[] = {"C2", "C5", "N1", "C5'", "OP3", "OP1", "O4'", "C4", "C1'", "O5'", "C3'", "OP2", "C2'", "O2", "C6", "C4'", "P", "O3'", "O2'", "O4", "N3", };
static double protor_U_atom_radius[] = {1.61, 1.76, 1.64, 1.88, 1.46, 1.42, 1.46, 1.61, 1.88, 1.46, 1.88, 1.46, 1.88, 1.42, 1.76, 1.88, 1.8, 1.46, 1.46, 1.42, 1.64, };
static int protor_U_atom_class[] = {0, 0, 1, 0, 1, 1, 1, 0, 0, 1, 0, 1, 0, 1, 0, 0, 1, 1, 1, 1, 1, };
static struct classifier_residue protor_U_cfg = {
    .name = "U", .n_atoms = 21,
    .atom_name = (char**) protor_U_atom_name,
    .atom_radius = (double*) protor_U_atom_radius,
    .atom_class = (int*) protor_U_atom_class };

static const char *protor_VAL_atom_name[] = {"CG1", "O", "CA", "C", "CG2", "CB", "OXT", "N", };
static double protor_VAL_atom_radius[] = {1.88, 1.42, 1.88, 1.61, 1.88, 1.88, 1.46, 1.64, };
static int protor_VAL_atom_class[] = {0, 1, 0, 0, 0, 0, 1, 1, };
static struct classifier_residue protor_VAL_cfg = {
    .name = "VAL", .n_atoms = 8,
    .atom_name = (char**) protor_VAL_atom_name,
    .atom_radius = (double*) protor_VAL_atom_radius,
    .atom_class = (int*) protor_VAL_atom_class };

static struct classifier_residue *protor_residue_cfg[] = {
    &protor_A_cfg, &protor_ACE_cfg, &protor_ALA_cfg, &protor_ARG_cfg, &protor_ASN_cfg, &protor_ASP_cfg, &protor_ASX_cfg, &protor_C_cfg, &protor_CYS_cfg, &protor_DA_cfg, &protor_DC_cfg, &protor_DG_cfg, &protor_DI_cfg, &protor_DT_cfg, &protor_DU_cfg, &protor_G_cfg, &protor_GLN_cfg, &protor_GLU_cfg, &protor_GLX_cfg, &protor_GLY_cfg, &protor_HIS_cfg, &protor_HOH_cfg, &protor_I_cfg, &protor_ILE_cfg, &protor_LEU_cfg, &protor_LYS_cfg, &protor_MET_cfg, &protor_NH2_cfg, &protor_PHE_cfg, &protor_PRO_cfg, &protor_PYL_cfg, &protor_SEC_cfg, &protor_SER_cfg, &protor_T_cfg, &protor_THR_cfg, &protor_TRP_cfg, &protor_TYR_cfg, &protor_U_cfg, &protor_VAL_cfg, };

static struct classifier_config protor_auto_config = {
    .n_residues = 39, .n_classes = 3,
    .residue_name = (char**) protor_residue_name,
    .class_name = (char**) protor_class_name,
    .residue = (struct classifier_residue **) protor_residue_cfg
};

static void protor_dummy_free(void *arg) {}

const freesasa_classifier freesasa_protor_classifier = {
    .config = &protor_auto_config,
    .n_classes = 3,
    .radius = freesasa_classifier_config_radius,
    .sasa_class =freesasa_classifier_config_class,
    .class2str = freesasa_classifier_config_class2str,
    // Since this object is const, calling free should emit compiler warnings.
    .free_config = protor_dummy_free,
};
