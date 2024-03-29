/*******************************************************************************
 * Copyright (c) 2018, College of William & Mary
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *     * Redistributions of source code must retain the above copyright
 *       notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above copyright
 *       notice, this list of conditions and the following disclaimer in the
 *       documentation and/or other materials provided with the distribution.
 *     * Neither the name of the College of William & Mary nor the
 *       names of its contributors may be used to endorse or promote products
 *       derived from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COLLEGE OF WILLIAM & MARY BE LIABLE FOR ANY
 * DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * PRIMME: https://github.com/primme/primme
 * Contact: Andreas Stathopoulos, a n d r e a s _at_ c s . w m . e d u
 *******************************************************************************
 *   NOTE: THIS FILE IS AUTOMATICALLY GENERATED. PLEASE DON'T MODIFY
 ******************************************************************************/


#ifndef init_H
#define init_H
#if !defined(CHECK_TEMPLATE) && !defined(init_basis_Sprimme)
#  define init_basis_Sprimme CONCAT(init_basis_,SCALAR_SUF)
#endif
#if !defined(CHECK_TEMPLATE) && !defined(init_basis_Rprimme)
#  define init_basis_Rprimme CONCAT(init_basis_,REAL_SUF)
#endif
#if !defined(CHECK_TEMPLATE) && !defined(init_basis_SHprimme)
#  define init_basis_SHprimme CONCAT(init_basis_,HOST_SCALAR_SUF)
#endif
#if !defined(CHECK_TEMPLATE) && !defined(init_basis_RHprimme)
#  define init_basis_RHprimme CONCAT(init_basis_,HOST_REAL_SUF)
#endif
#if !defined(CHECK_TEMPLATE) && !defined(init_basis_SXprimme)
#  define init_basis_SXprimme CONCAT(init_basis_,XSCALAR_SUF)
#endif
#if !defined(CHECK_TEMPLATE) && !defined(init_basis_RXprimme)
#  define init_basis_RXprimme CONCAT(init_basis_,XREAL_SUF)
#endif
#if !defined(CHECK_TEMPLATE) && !defined(init_basis_Shprimme)
#  define init_basis_Shprimme CONCAT(init_basis_,CONCAT(CONCAT(CONCAT(STEM_C,USE_ARITH(h,k)),primme),))
#endif
#if !defined(CHECK_TEMPLATE) && !defined(init_basis_Rhprimme)
#  define init_basis_Rhprimme CONCAT(init_basis_,CONCAT(CONCAT(CONCAT(STEM_C,h),primme),))
#endif
#if !defined(CHECK_TEMPLATE) && !defined(init_basis_Ssprimme)
#  define init_basis_Ssprimme CONCAT(init_basis_,CONCAT(CONCAT(CONCAT(STEM_C,USE_ARITH(s,c)),primme),))
#endif
#if !defined(CHECK_TEMPLATE) && !defined(init_basis_Rsprimme)
#  define init_basis_Rsprimme CONCAT(init_basis_,CONCAT(CONCAT(CONCAT(STEM_C,s),primme),))
#endif
#if !defined(CHECK_TEMPLATE) && !defined(init_basis_Sdprimme)
#  define init_basis_Sdprimme CONCAT(init_basis_,CONCAT(CONCAT(CONCAT(STEM_C,USE_ARITH(d,z)),primme),))
#endif
#if !defined(CHECK_TEMPLATE) && !defined(init_basis_Rdprimme)
#  define init_basis_Rdprimme CONCAT(init_basis_,CONCAT(CONCAT(CONCAT(STEM_C,d),primme),))
#endif
#if !defined(CHECK_TEMPLATE) && !defined(init_basis_Sqprimme)
#  define init_basis_Sqprimme CONCAT(init_basis_,CONCAT(CONCAT(CONCAT(STEM_C,USE_ARITH(q,w)),primme),))
#endif
#if !defined(CHECK_TEMPLATE) && !defined(init_basis_Rqprimme)
#  define init_basis_Rqprimme CONCAT(init_basis_,CONCAT(CONCAT(CONCAT(STEM_C,q),primme),))
#endif
#if !defined(CHECK_TEMPLATE) && !defined(init_basis_SXhprimme)
#  define init_basis_SXhprimme CONCAT(init_basis_,CONCAT(CONCAT(CONCAT(,USE_ARITH(h,k)),primme),))
#endif
#if !defined(CHECK_TEMPLATE) && !defined(init_basis_RXhprimme)
#  define init_basis_RXhprimme CONCAT(init_basis_,CONCAT(CONCAT(CONCAT(,h),primme),))
#endif
#if !defined(CHECK_TEMPLATE) && !defined(init_basis_SXsprimme)
#  define init_basis_SXsprimme CONCAT(init_basis_,CONCAT(CONCAT(CONCAT(,USE_ARITH(s,c)),primme),))
#endif
#if !defined(CHECK_TEMPLATE) && !defined(init_basis_RXsprimme)
#  define init_basis_RXsprimme CONCAT(init_basis_,CONCAT(CONCAT(CONCAT(,s),primme),))
#endif
#if !defined(CHECK_TEMPLATE) && !defined(init_basis_SXdprimme)
#  define init_basis_SXdprimme CONCAT(init_basis_,CONCAT(CONCAT(CONCAT(,USE_ARITH(d,z)),primme),))
#endif
#if !defined(CHECK_TEMPLATE) && !defined(init_basis_RXdprimme)
#  define init_basis_RXdprimme CONCAT(init_basis_,CONCAT(CONCAT(CONCAT(,d),primme),))
#endif
#if !defined(CHECK_TEMPLATE) && !defined(init_basis_SXqprimme)
#  define init_basis_SXqprimme CONCAT(init_basis_,CONCAT(CONCAT(CONCAT(,USE_ARITH(q,w)),primme),))
#endif
#if !defined(CHECK_TEMPLATE) && !defined(init_basis_RXqprimme)
#  define init_basis_RXqprimme CONCAT(init_basis_,CONCAT(CONCAT(CONCAT(,q),primme),))
#endif
#if !defined(CHECK_TEMPLATE) && !defined(init_basis_SHhprimme)
#  define init_basis_SHhprimme CONCAT(init_basis_,CONCAT(CONCAT(CONCAT(,USE_ARITH(s,c)),primme),))
#endif
#if !defined(CHECK_TEMPLATE) && !defined(init_basis_RHhprimme)
#  define init_basis_RHhprimme CONCAT(init_basis_,CONCAT(CONCAT(CONCAT(,s),primme),))
#endif
#if !defined(CHECK_TEMPLATE) && !defined(init_basis_SHsprimme)
#  define init_basis_SHsprimme CONCAT(init_basis_,CONCAT(CONCAT(CONCAT(,USE_ARITH(s,c)),primme),))
#endif
#if !defined(CHECK_TEMPLATE) && !defined(init_basis_RHsprimme)
#  define init_basis_RHsprimme CONCAT(init_basis_,CONCAT(CONCAT(CONCAT(,s),primme),))
#endif
#if !defined(CHECK_TEMPLATE) && !defined(init_basis_SHdprimme)
#  define init_basis_SHdprimme CONCAT(init_basis_,CONCAT(CONCAT(CONCAT(,USE_ARITH(d,z)),primme),))
#endif
#if !defined(CHECK_TEMPLATE) && !defined(init_basis_RHdprimme)
#  define init_basis_RHdprimme CONCAT(init_basis_,CONCAT(CONCAT(CONCAT(,d),primme),))
#endif
#if !defined(CHECK_TEMPLATE) && !defined(init_basis_SHqprimme)
#  define init_basis_SHqprimme CONCAT(init_basis_,CONCAT(CONCAT(CONCAT(,USE_ARITH(q,w)),primme),))
#endif
#if !defined(CHECK_TEMPLATE) && !defined(init_basis_RHqprimme)
#  define init_basis_RHqprimme CONCAT(init_basis_,CONCAT(CONCAT(CONCAT(,q),primme),))
#endif
int init_basis_dprimme(dummy_type_dprimme *V, PRIMME_INT nLocal, PRIMME_INT ldV, dummy_type_dprimme *W,
      PRIMME_INT ldW, dummy_type_dprimme *BV, PRIMME_INT ldBV, dummy_type_dprimme *evecs,
      PRIMME_INT ldevecs, dummy_type_dprimme *Bevecs, PRIMME_INT ldBevecs, dummy_type_dprimme *evecsHat,
      PRIMME_INT ldevecsHat, dummy_type_dprimme *M, int ldM, dummy_type_dprimme *Mfact, int ldMfact,
      int *ipivot, dummy_type_dprimme *VtBV, int ldVtBV, dummy_type_dprimme *fVtBV, int ldfVtBV,
      int maxRank, int *basisSize, int *nextGuess, int *numGuesses,
      primme_context ctx);
#if !defined(CHECK_TEMPLATE) && !defined(init_block_krylov)
#  define init_block_krylov CONCAT(init_block_krylov,SCALAR_SUF)
#endif
int init_block_krylovdprimme(dummy_type_dprimme *V, PRIMME_INT nLocal, PRIMME_INT ldV,
      dummy_type_dprimme *W, PRIMME_INT ldW, dummy_type_dprimme *BV, PRIMME_INT ldBV, int dv1, int dv2,
      dummy_type_dprimme *locked, PRIMME_INT ldlocked, int numLocked, dummy_type_dprimme *VtBV,
      int ldVtBV, dummy_type_dprimme *fVtBV, int ldfVtBV, int maxRank, primme_context ctx);
int init_basis_hprimme(dummy_type_hprimme *V, PRIMME_INT nLocal, PRIMME_INT ldV, dummy_type_hprimme *W,
      PRIMME_INT ldW, dummy_type_hprimme *BV, PRIMME_INT ldBV, dummy_type_hprimme *evecs,
      PRIMME_INT ldevecs, dummy_type_hprimme *Bevecs, PRIMME_INT ldBevecs, dummy_type_hprimme *evecsHat,
      PRIMME_INT ldevecsHat, dummy_type_sprimme *M, int ldM, dummy_type_sprimme *Mfact, int ldMfact,
      int *ipivot, dummy_type_sprimme *VtBV, int ldVtBV, dummy_type_sprimme *fVtBV, int ldfVtBV,
      int maxRank, int *basisSize, int *nextGuess, int *numGuesses,
      primme_context ctx);
int init_block_krylovhprimme(dummy_type_hprimme *V, PRIMME_INT nLocal, PRIMME_INT ldV,
      dummy_type_hprimme *W, PRIMME_INT ldW, dummy_type_hprimme *BV, PRIMME_INT ldBV, int dv1, int dv2,
      dummy_type_hprimme *locked, PRIMME_INT ldlocked, int numLocked, dummy_type_sprimme *VtBV,
      int ldVtBV, dummy_type_sprimme *fVtBV, int ldfVtBV, int maxRank, primme_context ctx);
int init_basis_kprimme(dummy_type_kprimme *V, PRIMME_INT nLocal, PRIMME_INT ldV, dummy_type_kprimme *W,
      PRIMME_INT ldW, dummy_type_kprimme *BV, PRIMME_INT ldBV, dummy_type_kprimme *evecs,
      PRIMME_INT ldevecs, dummy_type_kprimme *Bevecs, PRIMME_INT ldBevecs, dummy_type_kprimme *evecsHat,
      PRIMME_INT ldevecsHat, dummy_type_cprimme *M, int ldM, dummy_type_cprimme *Mfact, int ldMfact,
      int *ipivot, dummy_type_cprimme *VtBV, int ldVtBV, dummy_type_cprimme *fVtBV, int ldfVtBV,
      int maxRank, int *basisSize, int *nextGuess, int *numGuesses,
      primme_context ctx);
int init_block_krylovkprimme(dummy_type_kprimme *V, PRIMME_INT nLocal, PRIMME_INT ldV,
      dummy_type_kprimme *W, PRIMME_INT ldW, dummy_type_kprimme *BV, PRIMME_INT ldBV, int dv1, int dv2,
      dummy_type_kprimme *locked, PRIMME_INT ldlocked, int numLocked, dummy_type_cprimme *VtBV,
      int ldVtBV, dummy_type_cprimme *fVtBV, int ldfVtBV, int maxRank, primme_context ctx);
int init_basis_sprimme(dummy_type_sprimme *V, PRIMME_INT nLocal, PRIMME_INT ldV, dummy_type_sprimme *W,
      PRIMME_INT ldW, dummy_type_sprimme *BV, PRIMME_INT ldBV, dummy_type_sprimme *evecs,
      PRIMME_INT ldevecs, dummy_type_sprimme *Bevecs, PRIMME_INT ldBevecs, dummy_type_sprimme *evecsHat,
      PRIMME_INT ldevecsHat, dummy_type_sprimme *M, int ldM, dummy_type_sprimme *Mfact, int ldMfact,
      int *ipivot, dummy_type_sprimme *VtBV, int ldVtBV, dummy_type_sprimme *fVtBV, int ldfVtBV,
      int maxRank, int *basisSize, int *nextGuess, int *numGuesses,
      primme_context ctx);
int init_block_krylovsprimme(dummy_type_sprimme *V, PRIMME_INT nLocal, PRIMME_INT ldV,
      dummy_type_sprimme *W, PRIMME_INT ldW, dummy_type_sprimme *BV, PRIMME_INT ldBV, int dv1, int dv2,
      dummy_type_sprimme *locked, PRIMME_INT ldlocked, int numLocked, dummy_type_sprimme *VtBV,
      int ldVtBV, dummy_type_sprimme *fVtBV, int ldfVtBV, int maxRank, primme_context ctx);
int init_basis_cprimme(dummy_type_cprimme *V, PRIMME_INT nLocal, PRIMME_INT ldV, dummy_type_cprimme *W,
      PRIMME_INT ldW, dummy_type_cprimme *BV, PRIMME_INT ldBV, dummy_type_cprimme *evecs,
      PRIMME_INT ldevecs, dummy_type_cprimme *Bevecs, PRIMME_INT ldBevecs, dummy_type_cprimme *evecsHat,
      PRIMME_INT ldevecsHat, dummy_type_cprimme *M, int ldM, dummy_type_cprimme *Mfact, int ldMfact,
      int *ipivot, dummy_type_cprimme *VtBV, int ldVtBV, dummy_type_cprimme *fVtBV, int ldfVtBV,
      int maxRank, int *basisSize, int *nextGuess, int *numGuesses,
      primme_context ctx);
int init_block_krylovcprimme(dummy_type_cprimme *V, PRIMME_INT nLocal, PRIMME_INT ldV,
      dummy_type_cprimme *W, PRIMME_INT ldW, dummy_type_cprimme *BV, PRIMME_INT ldBV, int dv1, int dv2,
      dummy_type_cprimme *locked, PRIMME_INT ldlocked, int numLocked, dummy_type_cprimme *VtBV,
      int ldVtBV, dummy_type_cprimme *fVtBV, int ldfVtBV, int maxRank, primme_context ctx);
int init_basis_zprimme(dummy_type_zprimme *V, PRIMME_INT nLocal, PRIMME_INT ldV, dummy_type_zprimme *W,
      PRIMME_INT ldW, dummy_type_zprimme *BV, PRIMME_INT ldBV, dummy_type_zprimme *evecs,
      PRIMME_INT ldevecs, dummy_type_zprimme *Bevecs, PRIMME_INT ldBevecs, dummy_type_zprimme *evecsHat,
      PRIMME_INT ldevecsHat, dummy_type_zprimme *M, int ldM, dummy_type_zprimme *Mfact, int ldMfact,
      int *ipivot, dummy_type_zprimme *VtBV, int ldVtBV, dummy_type_zprimme *fVtBV, int ldfVtBV,
      int maxRank, int *basisSize, int *nextGuess, int *numGuesses,
      primme_context ctx);
int init_block_krylovzprimme(dummy_type_zprimme *V, PRIMME_INT nLocal, PRIMME_INT ldV,
      dummy_type_zprimme *W, PRIMME_INT ldW, dummy_type_zprimme *BV, PRIMME_INT ldBV, int dv1, int dv2,
      dummy_type_zprimme *locked, PRIMME_INT ldlocked, int numLocked, dummy_type_zprimme *VtBV,
      int ldVtBV, dummy_type_zprimme *fVtBV, int ldfVtBV, int maxRank, primme_context ctx);
int init_basis_magma_hprimme(dummy_type_magma_hprimme *V, PRIMME_INT nLocal, PRIMME_INT ldV, dummy_type_magma_hprimme *W,
      PRIMME_INT ldW, dummy_type_magma_hprimme *BV, PRIMME_INT ldBV, dummy_type_magma_hprimme *evecs,
      PRIMME_INT ldevecs, dummy_type_magma_hprimme *Bevecs, PRIMME_INT ldBevecs, dummy_type_magma_hprimme *evecsHat,
      PRIMME_INT ldevecsHat, dummy_type_sprimme *M, int ldM, dummy_type_sprimme *Mfact, int ldMfact,
      int *ipivot, dummy_type_sprimme *VtBV, int ldVtBV, dummy_type_sprimme *fVtBV, int ldfVtBV,
      int maxRank, int *basisSize, int *nextGuess, int *numGuesses,
      primme_context ctx);
int init_block_krylovmagma_hprimme(dummy_type_magma_hprimme *V, PRIMME_INT nLocal, PRIMME_INT ldV,
      dummy_type_magma_hprimme *W, PRIMME_INT ldW, dummy_type_magma_hprimme *BV, PRIMME_INT ldBV, int dv1, int dv2,
      dummy_type_magma_hprimme *locked, PRIMME_INT ldlocked, int numLocked, dummy_type_sprimme *VtBV,
      int ldVtBV, dummy_type_sprimme *fVtBV, int ldfVtBV, int maxRank, primme_context ctx);
int init_basis_magma_kprimme(dummy_type_magma_kprimme *V, PRIMME_INT nLocal, PRIMME_INT ldV, dummy_type_magma_kprimme *W,
      PRIMME_INT ldW, dummy_type_magma_kprimme *BV, PRIMME_INT ldBV, dummy_type_magma_kprimme *evecs,
      PRIMME_INT ldevecs, dummy_type_magma_kprimme *Bevecs, PRIMME_INT ldBevecs, dummy_type_magma_kprimme *evecsHat,
      PRIMME_INT ldevecsHat, dummy_type_cprimme *M, int ldM, dummy_type_cprimme *Mfact, int ldMfact,
      int *ipivot, dummy_type_cprimme *VtBV, int ldVtBV, dummy_type_cprimme *fVtBV, int ldfVtBV,
      int maxRank, int *basisSize, int *nextGuess, int *numGuesses,
      primme_context ctx);
int init_block_krylovmagma_kprimme(dummy_type_magma_kprimme *V, PRIMME_INT nLocal, PRIMME_INT ldV,
      dummy_type_magma_kprimme *W, PRIMME_INT ldW, dummy_type_magma_kprimme *BV, PRIMME_INT ldBV, int dv1, int dv2,
      dummy_type_magma_kprimme *locked, PRIMME_INT ldlocked, int numLocked, dummy_type_cprimme *VtBV,
      int ldVtBV, dummy_type_cprimme *fVtBV, int ldfVtBV, int maxRank, primme_context ctx);
int init_basis_magma_sprimme(dummy_type_magma_sprimme *V, PRIMME_INT nLocal, PRIMME_INT ldV, dummy_type_magma_sprimme *W,
      PRIMME_INT ldW, dummy_type_magma_sprimme *BV, PRIMME_INT ldBV, dummy_type_magma_sprimme *evecs,
      PRIMME_INT ldevecs, dummy_type_magma_sprimme *Bevecs, PRIMME_INT ldBevecs, dummy_type_magma_sprimme *evecsHat,
      PRIMME_INT ldevecsHat, dummy_type_sprimme *M, int ldM, dummy_type_sprimme *Mfact, int ldMfact,
      int *ipivot, dummy_type_sprimme *VtBV, int ldVtBV, dummy_type_sprimme *fVtBV, int ldfVtBV,
      int maxRank, int *basisSize, int *nextGuess, int *numGuesses,
      primme_context ctx);
int init_block_krylovmagma_sprimme(dummy_type_magma_sprimme *V, PRIMME_INT nLocal, PRIMME_INT ldV,
      dummy_type_magma_sprimme *W, PRIMME_INT ldW, dummy_type_magma_sprimme *BV, PRIMME_INT ldBV, int dv1, int dv2,
      dummy_type_magma_sprimme *locked, PRIMME_INT ldlocked, int numLocked, dummy_type_sprimme *VtBV,
      int ldVtBV, dummy_type_sprimme *fVtBV, int ldfVtBV, int maxRank, primme_context ctx);
int init_basis_magma_cprimme(dummy_type_magma_cprimme *V, PRIMME_INT nLocal, PRIMME_INT ldV, dummy_type_magma_cprimme *W,
      PRIMME_INT ldW, dummy_type_magma_cprimme *BV, PRIMME_INT ldBV, dummy_type_magma_cprimme *evecs,
      PRIMME_INT ldevecs, dummy_type_magma_cprimme *Bevecs, PRIMME_INT ldBevecs, dummy_type_magma_cprimme *evecsHat,
      PRIMME_INT ldevecsHat, dummy_type_cprimme *M, int ldM, dummy_type_cprimme *Mfact, int ldMfact,
      int *ipivot, dummy_type_cprimme *VtBV, int ldVtBV, dummy_type_cprimme *fVtBV, int ldfVtBV,
      int maxRank, int *basisSize, int *nextGuess, int *numGuesses,
      primme_context ctx);
int init_block_krylovmagma_cprimme(dummy_type_magma_cprimme *V, PRIMME_INT nLocal, PRIMME_INT ldV,
      dummy_type_magma_cprimme *W, PRIMME_INT ldW, dummy_type_magma_cprimme *BV, PRIMME_INT ldBV, int dv1, int dv2,
      dummy_type_magma_cprimme *locked, PRIMME_INT ldlocked, int numLocked, dummy_type_cprimme *VtBV,
      int ldVtBV, dummy_type_cprimme *fVtBV, int ldfVtBV, int maxRank, primme_context ctx);
int init_basis_magma_dprimme(dummy_type_magma_dprimme *V, PRIMME_INT nLocal, PRIMME_INT ldV, dummy_type_magma_dprimme *W,
      PRIMME_INT ldW, dummy_type_magma_dprimme *BV, PRIMME_INT ldBV, dummy_type_magma_dprimme *evecs,
      PRIMME_INT ldevecs, dummy_type_magma_dprimme *Bevecs, PRIMME_INT ldBevecs, dummy_type_magma_dprimme *evecsHat,
      PRIMME_INT ldevecsHat, dummy_type_dprimme *M, int ldM, dummy_type_dprimme *Mfact, int ldMfact,
      int *ipivot, dummy_type_dprimme *VtBV, int ldVtBV, dummy_type_dprimme *fVtBV, int ldfVtBV,
      int maxRank, int *basisSize, int *nextGuess, int *numGuesses,
      primme_context ctx);
int init_block_krylovmagma_dprimme(dummy_type_magma_dprimme *V, PRIMME_INT nLocal, PRIMME_INT ldV,
      dummy_type_magma_dprimme *W, PRIMME_INT ldW, dummy_type_magma_dprimme *BV, PRIMME_INT ldBV, int dv1, int dv2,
      dummy_type_magma_dprimme *locked, PRIMME_INT ldlocked, int numLocked, dummy_type_dprimme *VtBV,
      int ldVtBV, dummy_type_dprimme *fVtBV, int ldfVtBV, int maxRank, primme_context ctx);
int init_basis_magma_zprimme(dummy_type_magma_zprimme *V, PRIMME_INT nLocal, PRIMME_INT ldV, dummy_type_magma_zprimme *W,
      PRIMME_INT ldW, dummy_type_magma_zprimme *BV, PRIMME_INT ldBV, dummy_type_magma_zprimme *evecs,
      PRIMME_INT ldevecs, dummy_type_magma_zprimme *Bevecs, PRIMME_INT ldBevecs, dummy_type_magma_zprimme *evecsHat,
      PRIMME_INT ldevecsHat, dummy_type_zprimme *M, int ldM, dummy_type_zprimme *Mfact, int ldMfact,
      int *ipivot, dummy_type_zprimme *VtBV, int ldVtBV, dummy_type_zprimme *fVtBV, int ldfVtBV,
      int maxRank, int *basisSize, int *nextGuess, int *numGuesses,
      primme_context ctx);
int init_block_krylovmagma_zprimme(dummy_type_magma_zprimme *V, PRIMME_INT nLocal, PRIMME_INT ldV,
      dummy_type_magma_zprimme *W, PRIMME_INT ldW, dummy_type_magma_zprimme *BV, PRIMME_INT ldBV, int dv1, int dv2,
      dummy_type_magma_zprimme *locked, PRIMME_INT ldlocked, int numLocked, dummy_type_zprimme *VtBV,
      int ldVtBV, dummy_type_zprimme *fVtBV, int ldfVtBV, int maxRank, primme_context ctx);
int init_basis_cublas_hprimme(dummy_type_cublas_hprimme *V, PRIMME_INT nLocal, PRIMME_INT ldV, dummy_type_cublas_hprimme *W,
      PRIMME_INT ldW, dummy_type_cublas_hprimme *BV, PRIMME_INT ldBV, dummy_type_cublas_hprimme *evecs,
      PRIMME_INT ldevecs, dummy_type_cublas_hprimme *Bevecs, PRIMME_INT ldBevecs, dummy_type_cublas_hprimme *evecsHat,
      PRIMME_INT ldevecsHat, dummy_type_sprimme *M, int ldM, dummy_type_sprimme *Mfact, int ldMfact,
      int *ipivot, dummy_type_sprimme *VtBV, int ldVtBV, dummy_type_sprimme *fVtBV, int ldfVtBV,
      int maxRank, int *basisSize, int *nextGuess, int *numGuesses,
      primme_context ctx);
int init_block_krylovcublas_hprimme(dummy_type_cublas_hprimme *V, PRIMME_INT nLocal, PRIMME_INT ldV,
      dummy_type_cublas_hprimme *W, PRIMME_INT ldW, dummy_type_cublas_hprimme *BV, PRIMME_INT ldBV, int dv1, int dv2,
      dummy_type_cublas_hprimme *locked, PRIMME_INT ldlocked, int numLocked, dummy_type_sprimme *VtBV,
      int ldVtBV, dummy_type_sprimme *fVtBV, int ldfVtBV, int maxRank, primme_context ctx);
int init_basis_cublas_kprimme(dummy_type_cublas_kprimme *V, PRIMME_INT nLocal, PRIMME_INT ldV, dummy_type_cublas_kprimme *W,
      PRIMME_INT ldW, dummy_type_cublas_kprimme *BV, PRIMME_INT ldBV, dummy_type_cublas_kprimme *evecs,
      PRIMME_INT ldevecs, dummy_type_cublas_kprimme *Bevecs, PRIMME_INT ldBevecs, dummy_type_cublas_kprimme *evecsHat,
      PRIMME_INT ldevecsHat, dummy_type_cprimme *M, int ldM, dummy_type_cprimme *Mfact, int ldMfact,
      int *ipivot, dummy_type_cprimme *VtBV, int ldVtBV, dummy_type_cprimme *fVtBV, int ldfVtBV,
      int maxRank, int *basisSize, int *nextGuess, int *numGuesses,
      primme_context ctx);
int init_block_krylovcublas_kprimme(dummy_type_cublas_kprimme *V, PRIMME_INT nLocal, PRIMME_INT ldV,
      dummy_type_cublas_kprimme *W, PRIMME_INT ldW, dummy_type_cublas_kprimme *BV, PRIMME_INT ldBV, int dv1, int dv2,
      dummy_type_cublas_kprimme *locked, PRIMME_INT ldlocked, int numLocked, dummy_type_cprimme *VtBV,
      int ldVtBV, dummy_type_cprimme *fVtBV, int ldfVtBV, int maxRank, primme_context ctx);
int init_basis_cublas_sprimme(dummy_type_cublas_sprimme *V, PRIMME_INT nLocal, PRIMME_INT ldV, dummy_type_cublas_sprimme *W,
      PRIMME_INT ldW, dummy_type_cublas_sprimme *BV, PRIMME_INT ldBV, dummy_type_cublas_sprimme *evecs,
      PRIMME_INT ldevecs, dummy_type_cublas_sprimme *Bevecs, PRIMME_INT ldBevecs, dummy_type_cublas_sprimme *evecsHat,
      PRIMME_INT ldevecsHat, dummy_type_sprimme *M, int ldM, dummy_type_sprimme *Mfact, int ldMfact,
      int *ipivot, dummy_type_sprimme *VtBV, int ldVtBV, dummy_type_sprimme *fVtBV, int ldfVtBV,
      int maxRank, int *basisSize, int *nextGuess, int *numGuesses,
      primme_context ctx);
int init_block_krylovcublas_sprimme(dummy_type_cublas_sprimme *V, PRIMME_INT nLocal, PRIMME_INT ldV,
      dummy_type_cublas_sprimme *W, PRIMME_INT ldW, dummy_type_cublas_sprimme *BV, PRIMME_INT ldBV, int dv1, int dv2,
      dummy_type_cublas_sprimme *locked, PRIMME_INT ldlocked, int numLocked, dummy_type_sprimme *VtBV,
      int ldVtBV, dummy_type_sprimme *fVtBV, int ldfVtBV, int maxRank, primme_context ctx);
int init_basis_cublas_cprimme(dummy_type_cublas_cprimme *V, PRIMME_INT nLocal, PRIMME_INT ldV, dummy_type_cublas_cprimme *W,
      PRIMME_INT ldW, dummy_type_cublas_cprimme *BV, PRIMME_INT ldBV, dummy_type_cublas_cprimme *evecs,
      PRIMME_INT ldevecs, dummy_type_cublas_cprimme *Bevecs, PRIMME_INT ldBevecs, dummy_type_cublas_cprimme *evecsHat,
      PRIMME_INT ldevecsHat, dummy_type_cprimme *M, int ldM, dummy_type_cprimme *Mfact, int ldMfact,
      int *ipivot, dummy_type_cprimme *VtBV, int ldVtBV, dummy_type_cprimme *fVtBV, int ldfVtBV,
      int maxRank, int *basisSize, int *nextGuess, int *numGuesses,
      primme_context ctx);
int init_block_krylovcublas_cprimme(dummy_type_cublas_cprimme *V, PRIMME_INT nLocal, PRIMME_INT ldV,
      dummy_type_cublas_cprimme *W, PRIMME_INT ldW, dummy_type_cublas_cprimme *BV, PRIMME_INT ldBV, int dv1, int dv2,
      dummy_type_cublas_cprimme *locked, PRIMME_INT ldlocked, int numLocked, dummy_type_cprimme *VtBV,
      int ldVtBV, dummy_type_cprimme *fVtBV, int ldfVtBV, int maxRank, primme_context ctx);
int init_basis_cublas_dprimme(dummy_type_cublas_dprimme *V, PRIMME_INT nLocal, PRIMME_INT ldV, dummy_type_cublas_dprimme *W,
      PRIMME_INT ldW, dummy_type_cublas_dprimme *BV, PRIMME_INT ldBV, dummy_type_cublas_dprimme *evecs,
      PRIMME_INT ldevecs, dummy_type_cublas_dprimme *Bevecs, PRIMME_INT ldBevecs, dummy_type_cublas_dprimme *evecsHat,
      PRIMME_INT ldevecsHat, dummy_type_dprimme *M, int ldM, dummy_type_dprimme *Mfact, int ldMfact,
      int *ipivot, dummy_type_dprimme *VtBV, int ldVtBV, dummy_type_dprimme *fVtBV, int ldfVtBV,
      int maxRank, int *basisSize, int *nextGuess, int *numGuesses,
      primme_context ctx);
int init_block_krylovcublas_dprimme(dummy_type_cublas_dprimme *V, PRIMME_INT nLocal, PRIMME_INT ldV,
      dummy_type_cublas_dprimme *W, PRIMME_INT ldW, dummy_type_cublas_dprimme *BV, PRIMME_INT ldBV, int dv1, int dv2,
      dummy_type_cublas_dprimme *locked, PRIMME_INT ldlocked, int numLocked, dummy_type_dprimme *VtBV,
      int ldVtBV, dummy_type_dprimme *fVtBV, int ldfVtBV, int maxRank, primme_context ctx);
int init_basis_cublas_zprimme(dummy_type_cublas_zprimme *V, PRIMME_INT nLocal, PRIMME_INT ldV, dummy_type_cublas_zprimme *W,
      PRIMME_INT ldW, dummy_type_cublas_zprimme *BV, PRIMME_INT ldBV, dummy_type_cublas_zprimme *evecs,
      PRIMME_INT ldevecs, dummy_type_cublas_zprimme *Bevecs, PRIMME_INT ldBevecs, dummy_type_cublas_zprimme *evecsHat,
      PRIMME_INT ldevecsHat, dummy_type_zprimme *M, int ldM, dummy_type_zprimme *Mfact, int ldMfact,
      int *ipivot, dummy_type_zprimme *VtBV, int ldVtBV, dummy_type_zprimme *fVtBV, int ldfVtBV,
      int maxRank, int *basisSize, int *nextGuess, int *numGuesses,
      primme_context ctx);
int init_block_krylovcublas_zprimme(dummy_type_cublas_zprimme *V, PRIMME_INT nLocal, PRIMME_INT ldV,
      dummy_type_cublas_zprimme *W, PRIMME_INT ldW, dummy_type_cublas_zprimme *BV, PRIMME_INT ldBV, int dv1, int dv2,
      dummy_type_cublas_zprimme *locked, PRIMME_INT ldlocked, int numLocked, dummy_type_zprimme *VtBV,
      int ldVtBV, dummy_type_zprimme *fVtBV, int ldfVtBV, int maxRank, primme_context ctx);
#endif
