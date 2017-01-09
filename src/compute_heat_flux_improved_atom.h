/* -*- c++ -*- ----------------------------------------------------------
   LAMMPS - Large-scale Atomic/Molecular Massively Parallel Simulator
   http://lammps.sandia.gov, Sandia National Laboratories
   Steve Plimpton, sjplimp@sandia.gov

   Copyright (2003) Sandia Corporation.  Under the terms of Contract
   DE-AC04-94AL85000 with Sandia Corporation, the U.S. Government retains
   certain rights in this software.  This software is distributed under
   the GNU General Public License.

   See the README file in the top-level LAMMPS directory.
------------------------------------------------------------------------- */

#ifdef COMPUTE_CLASS

ComputeStyle(heat/flux_improved_atom,ComputeHeatFluxImprovedAtom)

#else

#ifndef LMP_COMPUTE_HEAT_FLUX_IMPROVED_ATOM_H
#define LMP_COMPUTE_HEAT_FLUX_IMPROVED_ATOM_H

#include "compute.h"

namespace LAMMPS_NS {

class ComputeHeatFluxImprovedAtom : public Compute {
 public:
  ComputeHeatFluxImprovedAtom(class LAMMPS *, int, char **);
  ~ComputeHeatFluxImprovedAtom();
  void init();
  void compute_vector();

  int pack_reverse_comm(int, int, double *);
  void unpack_reverse_comm(int, int *, double *);
  double memory_usage();

  int nmax;
  double **hf_atom;

};

}

#endif
#endif

/* ERROR/WARNING messages:

E: Illegal ... command

Self-explanatory.  Check the input script syntax and compare to the
documentation for the command.  You can use -echo screen as a
command-line option when running LAMMPS to see the offending line.

*/