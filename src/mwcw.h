// mwcw.h --
// $Id: mwcw.h 1269 2007-03-09 16:53:45Z jcw $
// This is part of MetaKit, see http://www.equi4.com/metakit/

/** @file
 * Configuration header for Metrowerks CodeWarrior
 */

#define q4_MWCW 1

/////////////////////////////////////////////////////////////////////////////

#if q4_68K
#if !__option(IEEEdoubles)
#error Cannot build MetaKit with 10-byte doubles
#endif
#endif

#if __option(bool)
#define q4_BOOL 1
  // undo previous defaults, because q4_BOOL is not set early enough
#undef false
#undef true
#undef bool
#endif

#undef _MSC_VER

#pragma export on

/////////////////////////////////////////////////////////////////////////////
