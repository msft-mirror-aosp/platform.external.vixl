// Copyright 2016, VIXL authors
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are met:
//
//   * Redistributions of source code must retain the above copyright notice,
//     this list of conditions and the following disclaimer.
//   * Redistributions in binary form must reproduce the above copyright notice,
//     this list of conditions and the following disclaimer in the documentation
//     and/or other materials provided with the distribution.
//   * Neither the name of ARM Limited nor the names of its contributors may be
//     used to endorse or promote products derived from this software without
//     specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS CONTRIBUTORS "AS IS" AND
// ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
// WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
// DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE
// FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
// DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
// SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
// CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
// OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

// -----------------------------------------------------------------------------
// This file is auto generated from the
// test/aarch32/config/template-assembler-aarch32.cc.in template file using
// tools/generate_tests.py.
//
// PLEASE DO NOT EDIT.
// -----------------------------------------------------------------------------

#include "test-runner.h"

#include "test-utils.h"
#include "test-utils-aarch32.h"

#include "aarch32/assembler-aarch32.h"
#include "aarch32/macro-assembler-aarch32.h"

#define BUF_SIZE (4096)

namespace vixl {
namespace aarch32 {

// List of instruction mnemonics.
#define FOREACH_INSTRUCTION(M) \
  M(Mul)                       \
  M(Qadd16)                    \
  M(Qadd8)                     \
  M(Qasx)                      \
  M(Qsax)                      \
  M(Qsub16)                    \
  M(Qsub8)                     \
  M(Sdiv)                      \
  M(Shadd16)                   \
  M(Shadd8)                    \
  M(Shasx)                     \
  M(Shsax)                     \
  M(Shsub16)                   \
  M(Shsub8)                    \
  M(Smmul)                     \
  M(Smmulr)                    \
  M(Smuad)                     \
  M(Smuadx)                    \
  M(Smulbb)                    \
  M(Smulbt)                    \
  M(Smultb)                    \
  M(Smultt)                    \
  M(Smulwb)                    \
  M(Smulwt)                    \
  M(Smusd)                     \
  M(Smusdx)                    \
  M(Udiv)                      \
  M(Uhadd16)                   \
  M(Uhadd8)                    \
  M(Uhasx)                     \
  M(Uhsax)                     \
  M(Uhsub16)                   \
  M(Uhsub8)                    \
  M(Uqadd16)                   \
  M(Uqadd8)                    \
  M(Uqasx)                     \
  M(Uqsax)                     \
  M(Uqsub16)                   \
  M(Uqsub8)                    \
  M(Usad8)                     \
  M(Sadd16)                    \
  M(Sadd8)                     \
  M(Sasx)                      \
  M(Sel)                       \
  M(Ssax)                      \
  M(Ssub16)                    \
  M(Ssub8)                     \
  M(Uadd16)                    \
  M(Uadd8)                     \
  M(Uasx)                      \
  M(Usax)                      \
  M(Usub16)                    \
  M(Usub8)                     \
  M(Qadd)                      \
  M(Qdadd)                     \
  M(Qdsub)                     \
  M(Qsub)

// Values to be passed to the assembler to produce the instruction under test.
struct Operands {
  Condition cond;
  Register rd;
  Register rn;
  Register rm;
};

// This structure contains all data needed to test one specific
// instruction.
struct TestData {
  // The `operands` field represents what to pass to the assembler to
  // produce the instruction.
  Operands operands;
  // Optionally expect the MacroAssembler to have generated an extra
  // instruction. This is used when the instruction needs to be in an IT block.
  const char* expect_instruction_before;
  // Description of the operands, used for error reporting.
  const char* operands_description;
  // Unique identifier, used for generating traces.
  const char* identifier;
};

struct TestResult {
  size_t size;
  const byte* encoding;
};

// Each element of this array produce one instruction encoding.
static const TestData kTests[] = {
    {{al, r5, r12, r2}, "", "al r5 r12 r2", "al_r5_r12_r2"},
    {{al, r7, r3, r12}, "", "al r7 r3 r12", "al_r7_r3_r12"},
    {{al, r1, r2, r10}, "", "al r1 r2 r10", "al_r1_r2_r10"},
    {{al, r2, r7, r1}, "", "al r2 r7 r1", "al_r2_r7_r1"},
    {{al, r11, r9, r0}, "", "al r11 r9 r0", "al_r11_r9_r0"},
    {{al, r6, r9, r10}, "", "al r6 r9 r10", "al_r6_r9_r10"},
    {{al, r0, r5, r0}, "", "al r0 r5 r0", "al_r0_r5_r0"},
    {{al, r4, r6, r6}, "", "al r4 r6 r6", "al_r4_r6_r6"},
    {{al, r1, r13, r1}, "", "al r1 r13 r1", "al_r1_r13_r1"},
    {{al, r8, r14, r8}, "", "al r8 r14 r8", "al_r8_r14_r8"},
    {{al, r6, r12, r11}, "", "al r6 r12 r11", "al_r6_r12_r11"},
    {{al, r7, r2, r8}, "", "al r7 r2 r8", "al_r7_r2_r8"},
    {{al, r13, r6, r7}, "", "al r13 r6 r7", "al_r13_r6_r7"},
    {{al, r10, r3, r13}, "", "al r10 r3 r13", "al_r10_r3_r13"},
    {{al, r10, r10, r2}, "", "al r10 r10 r2", "al_r10_r10_r2"},
    {{al, r3, r2, r12}, "", "al r3 r2 r12", "al_r3_r2_r12"},
    {{al, r0, r9, r7}, "", "al r0 r9 r7", "al_r0_r9_r7"},
    {{al, r4, r1, r5}, "", "al r4 r1 r5", "al_r4_r1_r5"},
    {{al, r12, r12, r1}, "", "al r12 r12 r1", "al_r12_r12_r1"},
    {{al, r4, r12, r2}, "", "al r4 r12 r2", "al_r4_r12_r2"},
    {{al, r9, r3, r4}, "", "al r9 r3 r4", "al_r9_r3_r4"},
    {{al, r13, r11, r3}, "", "al r13 r11 r3", "al_r13_r11_r3"},
    {{al, r5, r1, r5}, "", "al r5 r1 r5", "al_r5_r1_r5"},
    {{al, r14, r6, r2}, "", "al r14 r6 r2", "al_r14_r6_r2"},
    {{al, r1, r2, r0}, "", "al r1 r2 r0", "al_r1_r2_r0"},
    {{al, r1, r8, r14}, "", "al r1 r8 r14", "al_r1_r8_r14"},
    {{al, r12, r9, r10}, "", "al r12 r9 r10", "al_r12_r9_r10"},
    {{al, r2, r2, r6}, "", "al r2 r2 r6", "al_r2_r2_r6"},
    {{al, r13, r6, r2}, "", "al r13 r6 r2", "al_r13_r6_r2"},
    {{al, r8, r4, r3}, "", "al r8 r4 r3", "al_r8_r4_r3"},
    {{al, r7, r11, r3}, "", "al r7 r11 r3", "al_r7_r11_r3"},
    {{al, r8, r1, r13}, "", "al r8 r1 r13", "al_r8_r1_r13"},
    {{al, r1, r11, r6}, "", "al r1 r11 r6", "al_r1_r11_r6"},
    {{al, r2, r3, r10}, "", "al r2 r3 r10", "al_r2_r3_r10"},
    {{al, r0, r9, r0}, "", "al r0 r9 r0", "al_r0_r9_r0"},
    {{al, r6, r6, r1}, "", "al r6 r6 r1", "al_r6_r6_r1"},
    {{al, r5, r7, r10}, "", "al r5 r7 r10", "al_r5_r7_r10"},
    {{al, r10, r14, r7}, "", "al r10 r14 r7", "al_r10_r14_r7"},
    {{al, r8, r2, r12}, "", "al r8 r2 r12", "al_r8_r2_r12"},
    {{al, r11, r12, r3}, "", "al r11 r12 r3", "al_r11_r12_r3"},
    {{al, r0, r4, r13}, "", "al r0 r4 r13", "al_r0_r4_r13"},
    {{al, r13, r0, r8}, "", "al r13 r0 r8", "al_r13_r0_r8"},
    {{al, r7, r14, r12}, "", "al r7 r14 r12", "al_r7_r14_r12"},
    {{al, r8, r11, r10}, "", "al r8 r11 r10", "al_r8_r11_r10"},
    {{al, r8, r13, r14}, "", "al r8 r13 r14", "al_r8_r13_r14"},
    {{al, r13, r7, r1}, "", "al r13 r7 r1", "al_r13_r7_r1"},
    {{al, r10, r0, r14}, "", "al r10 r0 r14", "al_r10_r0_r14"},
    {{al, r6, r4, r12}, "", "al r6 r4 r12", "al_r6_r4_r12"},
    {{al, r8, r8, r12}, "", "al r8 r8 r12", "al_r8_r8_r12"},
    {{al, r10, r9, r4}, "", "al r10 r9 r4", "al_r10_r9_r4"},
    {{al, r14, r9, r8}, "", "al r14 r9 r8", "al_r14_r9_r8"},
    {{al, r9, r1, r0}, "", "al r9 r1 r0", "al_r9_r1_r0"},
    {{al, r14, r4, r11}, "", "al r14 r4 r11", "al_r14_r4_r11"},
    {{al, r13, r1, r12}, "", "al r13 r1 r12", "al_r13_r1_r12"},
    {{al, r6, r14, r5}, "", "al r6 r14 r5", "al_r6_r14_r5"},
    {{al, r7, r7, r6}, "", "al r7 r7 r6", "al_r7_r7_r6"},
    {{al, r6, r14, r0}, "", "al r6 r14 r0", "al_r6_r14_r0"},
    {{al, r7, r5, r11}, "", "al r7 r5 r11", "al_r7_r5_r11"},
    {{al, r9, r10, r9}, "", "al r9 r10 r9", "al_r9_r10_r9"},
    {{al, r4, r5, r0}, "", "al r4 r5 r0", "al_r4_r5_r0"},
    {{al, r3, r11, r2}, "", "al r3 r11 r2", "al_r3_r11_r2"},
    {{al, r1, r4, r3}, "", "al r1 r4 r3", "al_r1_r4_r3"},
    {{al, r13, r14, r6}, "", "al r13 r14 r6", "al_r13_r14_r6"},
    {{al, r1, r8, r13}, "", "al r1 r8 r13", "al_r1_r8_r13"},
    {{al, r4, r2, r7}, "", "al r4 r2 r7", "al_r4_r2_r7"},
    {{al, r1, r11, r3}, "", "al r1 r11 r3", "al_r1_r11_r3"},
    {{al, r9, r3, r6}, "", "al r9 r3 r6", "al_r9_r3_r6"},
    {{al, r0, r10, r5}, "", "al r0 r10 r5", "al_r0_r10_r5"},
    {{al, r5, r7, r2}, "", "al r5 r7 r2", "al_r5_r7_r2"},
    {{al, r1, r14, r9}, "", "al r1 r14 r9", "al_r1_r14_r9"},
    {{al, r9, r12, r11}, "", "al r9 r12 r11", "al_r9_r12_r11"},
    {{al, r0, r11, r8}, "", "al r0 r11 r8", "al_r0_r11_r8"},
    {{al, r9, r10, r12}, "", "al r9 r10 r12", "al_r9_r10_r12"},
    {{al, r8, r5, r5}, "", "al r8 r5 r5", "al_r8_r5_r5"},
    {{al, r10, r3, r10}, "", "al r10 r3 r10", "al_r10_r3_r10"},
    {{al, r13, r5, r8}, "", "al r13 r5 r8", "al_r13_r5_r8"},
    {{al, r11, r4, r2}, "", "al r11 r4 r2", "al_r11_r4_r2"},
    {{al, r1, r10, r7}, "", "al r1 r10 r7", "al_r1_r10_r7"},
    {{al, r12, r4, r1}, "", "al r12 r4 r1", "al_r12_r4_r1"},
    {{al, r11, r14, r8}, "", "al r11 r14 r8", "al_r11_r14_r8"},
    {{al, r1, r11, r8}, "", "al r1 r11 r8", "al_r1_r11_r8"},
    {{al, r3, r11, r10}, "", "al r3 r11 r10", "al_r3_r11_r10"},
    {{al, r6, r7, r0}, "", "al r6 r7 r0", "al_r6_r7_r0"},
    {{al, r6, r13, r9}, "", "al r6 r13 r9", "al_r6_r13_r9"},
    {{al, r9, r14, r0}, "", "al r9 r14 r0", "al_r9_r14_r0"},
    {{al, r6, r8, r2}, "", "al r6 r8 r2", "al_r6_r8_r2"},
    {{al, r7, r11, r12}, "", "al r7 r11 r12", "al_r7_r11_r12"},
    {{al, r9, r3, r0}, "", "al r9 r3 r0", "al_r9_r3_r0"},
    {{al, r5, r3, r5}, "", "al r5 r3 r5", "al_r5_r3_r5"},
    {{al, r5, r10, r8}, "", "al r5 r10 r8", "al_r5_r10_r8"},
    {{al, r12, r4, r13}, "", "al r12 r4 r13", "al_r12_r4_r13"},
    {{al, r7, r12, r10}, "", "al r7 r12 r10", "al_r7_r12_r10"},
    {{al, r6, r13, r11}, "", "al r6 r13 r11", "al_r6_r13_r11"},
    {{al, r5, r3, r7}, "", "al r5 r3 r7", "al_r5_r3_r7"},
    {{al, r11, r4, r6}, "", "al r11 r4 r6", "al_r11_r4_r6"},
    {{al, r10, r2, r3}, "", "al r10 r2 r3", "al_r10_r2_r3"},
    {{al, r0, r2, r1}, "", "al r0 r2 r1", "al_r0_r2_r1"},
    {{al, r11, r5, r7}, "", "al r11 r5 r7", "al_r11_r5_r7"},
    {{al, r14, r10, r1}, "", "al r14 r10 r1", "al_r14_r10_r1"},
    {{al, r1, r4, r1}, "", "al r1 r4 r1", "al_r1_r4_r1"},
    {{al, r9, r10, r11}, "", "al r9 r10 r11", "al_r9_r10_r11"},
    {{al, r6, r8, r0}, "", "al r6 r8 r0", "al_r6_r8_r0"},
    {{al, r0, r10, r11}, "", "al r0 r10 r11", "al_r0_r10_r11"},
    {{al, r14, r1, r4}, "", "al r14 r1 r4", "al_r14_r1_r4"},
    {{al, r7, r9, r5}, "", "al r7 r9 r5", "al_r7_r9_r5"},
    {{al, r13, r4, r2}, "", "al r13 r4 r2", "al_r13_r4_r2"},
    {{al, r5, r6, r3}, "", "al r5 r6 r3", "al_r5_r6_r3"},
    {{al, r13, r4, r8}, "", "al r13 r4 r8", "al_r13_r4_r8"},
    {{al, r11, r11, r12}, "", "al r11 r11 r12", "al_r11_r11_r12"},
    {{al, r3, r12, r6}, "", "al r3 r12 r6", "al_r3_r12_r6"},
    {{al, r4, r10, r1}, "", "al r4 r10 r1", "al_r4_r10_r1"},
    {{al, r7, r8, r12}, "", "al r7 r8 r12", "al_r7_r8_r12"},
    {{al, r11, r3, r3}, "", "al r11 r3 r3", "al_r11_r3_r3"},
    {{al, r14, r6, r6}, "", "al r14 r6 r6", "al_r14_r6_r6"},
    {{al, r1, r12, r1}, "", "al r1 r12 r1", "al_r1_r12_r1"},
    {{al, r13, r5, r7}, "", "al r13 r5 r7", "al_r13_r5_r7"},
    {{al, r6, r10, r8}, "", "al r6 r10 r8", "al_r6_r10_r8"},
    {{al, r7, r13, r5}, "", "al r7 r13 r5", "al_r7_r13_r5"},
    {{al, r12, r13, r4}, "", "al r12 r13 r4", "al_r12_r13_r4"},
    {{al, r7, r0, r8}, "", "al r7 r0 r8", "al_r7_r0_r8"},
    {{al, r7, r11, r9}, "", "al r7 r11 r9", "al_r7_r11_r9"},
    {{al, r8, r9, r1}, "", "al r8 r9 r1", "al_r8_r9_r1"},
    {{al, r14, r5, r10}, "", "al r14 r5 r10", "al_r14_r5_r10"},
    {{al, r4, r9, r14}, "", "al r4 r9 r14", "al_r4_r9_r14"},
    {{al, r10, r14, r9}, "", "al r10 r14 r9", "al_r10_r14_r9"},
    {{al, r0, r1, r11}, "", "al r0 r1 r11", "al_r0_r1_r11"},
    {{al, r11, r0, r11}, "", "al r11 r0 r11", "al_r11_r0_r11"},
    {{al, r10, r10, r7}, "", "al r10 r10 r7", "al_r10_r10_r7"},
    {{al, r8, r12, r7}, "", "al r8 r12 r7", "al_r8_r12_r7"},
    {{al, r9, r4, r10}, "", "al r9 r4 r10", "al_r9_r4_r10"},
    {{al, r8, r11, r14}, "", "al r8 r11 r14", "al_r8_r11_r14"},
    {{al, r8, r4, r7}, "", "al r8 r4 r7", "al_r8_r4_r7"},
    {{al, r13, r9, r11}, "", "al r13 r9 r11", "al_r13_r9_r11"},
    {{al, r2, r5, r7}, "", "al r2 r5 r7", "al_r2_r5_r7"},
    {{al, r9, r6, r8}, "", "al r9 r6 r8", "al_r9_r6_r8"},
    {{al, r2, r4, r10}, "", "al r2 r4 r10", "al_r2_r4_r10"},
    {{al, r2, r9, r4}, "", "al r2 r9 r4", "al_r2_r9_r4"},
    {{al, r12, r8, r12}, "", "al r12 r8 r12", "al_r12_r8_r12"},
    {{al, r0, r12, r2}, "", "al r0 r12 r2", "al_r0_r12_r2"},
    {{al, r4, r11, r13}, "", "al r4 r11 r13", "al_r4_r11_r13"},
    {{al, r7, r12, r14}, "", "al r7 r12 r14", "al_r7_r12_r14"},
    {{al, r4, r10, r3}, "", "al r4 r10 r3", "al_r4_r10_r3"},
    {{al, r5, r14, r7}, "", "al r5 r14 r7", "al_r5_r14_r7"},
    {{al, r1, r6, r10}, "", "al r1 r6 r10", "al_r1_r6_r10"},
    {{al, r0, r10, r10}, "", "al r0 r10 r10", "al_r0_r10_r10"},
    {{al, r6, r3, r3}, "", "al r6 r3 r3", "al_r6_r3_r3"},
    {{al, r2, r14, r6}, "", "al r2 r14 r6", "al_r2_r14_r6"},
    {{al, r7, r4, r2}, "", "al r7 r4 r2", "al_r7_r4_r2"},
    {{al, r3, r7, r9}, "", "al r3 r7 r9", "al_r3_r7_r9"},
    {{al, r0, r4, r12}, "", "al r0 r4 r12", "al_r0_r4_r12"},
    {{al, r8, r14, r11}, "", "al r8 r14 r11", "al_r8_r14_r11"},
    {{al, r2, r8, r11}, "", "al r2 r8 r11", "al_r2_r8_r11"},
    {{al, r14, r11, r8}, "", "al r14 r11 r8", "al_r14_r11_r8"},
    {{al, r5, r10, r12}, "", "al r5 r10 r12", "al_r5_r10_r12"},
    {{al, r0, r12, r5}, "", "al r0 r12 r5", "al_r0_r12_r5"},
    {{al, r4, r4, r7}, "", "al r4 r4 r7", "al_r4_r4_r7"},
    {{al, r5, r2, r10}, "", "al r5 r2 r10", "al_r5_r2_r10"},
    {{al, r14, r0, r0}, "", "al r14 r0 r0", "al_r14_r0_r0"},
    {{al, r1, r14, r4}, "", "al r1 r14 r4", "al_r1_r14_r4"},
    {{al, r1, r0, r2}, "", "al r1 r0 r2", "al_r1_r0_r2"},
    {{al, r11, r10, r7}, "", "al r11 r10 r7", "al_r11_r10_r7"},
    {{al, r13, r10, r4}, "", "al r13 r10 r4", "al_r13_r10_r4"},
    {{al, r13, r1, r9}, "", "al r13 r1 r9", "al_r13_r1_r9"},
    {{al, r8, r1, r9}, "", "al r8 r1 r9", "al_r8_r1_r9"},
    {{al, r6, r3, r9}, "", "al r6 r3 r9", "al_r6_r3_r9"},
    {{al, r10, r6, r8}, "", "al r10 r6 r8", "al_r10_r6_r8"},
    {{al, r6, r11, r9}, "", "al r6 r11 r9", "al_r6_r11_r9"},
    {{al, r1, r13, r14}, "", "al r1 r13 r14", "al_r1_r13_r14"},
    {{al, r1, r14, r12}, "", "al r1 r14 r12", "al_r1_r14_r12"},
    {{al, r0, r1, r4}, "", "al r0 r1 r4", "al_r0_r1_r4"},
    {{al, r8, r13, r1}, "", "al r8 r13 r1", "al_r8_r13_r1"},
    {{al, r7, r14, r5}, "", "al r7 r14 r5", "al_r7_r14_r5"},
    {{al, r5, r13, r8}, "", "al r5 r13 r8", "al_r5_r13_r8"},
    {{al, r11, r10, r13}, "", "al r11 r10 r13", "al_r11_r10_r13"},
    {{al, r7, r13, r2}, "", "al r7 r13 r2", "al_r7_r13_r2"},
    {{al, r2, r2, r13}, "", "al r2 r2 r13", "al_r2_r2_r13"},
    {{al, r1, r7, r5}, "", "al r1 r7 r5", "al_r1_r7_r5"},
    {{al, r12, r6, r12}, "", "al r12 r6 r12", "al_r12_r6_r12"},
    {{al, r5, r9, r11}, "", "al r5 r9 r11", "al_r5_r9_r11"},
    {{al, r12, r7, r1}, "", "al r12 r7 r1", "al_r12_r7_r1"},
    {{al, r13, r9, r9}, "", "al r13 r9 r9", "al_r13_r9_r9"},
    {{al, r10, r4, r13}, "", "al r10 r4 r13", "al_r10_r4_r13"},
    {{al, r9, r2, r10}, "", "al r9 r2 r10", "al_r9_r2_r10"},
    {{al, r1, r5, r13}, "", "al r1 r5 r13", "al_r1_r5_r13"},
    {{al, r12, r3, r9}, "", "al r12 r3 r9", "al_r12_r3_r9"},
    {{al, r6, r3, r0}, "", "al r6 r3 r0", "al_r6_r3_r0"},
    {{al, r9, r8, r8}, "", "al r9 r8 r8", "al_r9_r8_r8"},
    {{al, r6, r3, r4}, "", "al r6 r3 r4", "al_r6_r3_r4"},
    {{al, r12, r9, r0}, "", "al r12 r9 r0", "al_r12_r9_r0"},
    {{al, r4, r10, r0}, "", "al r4 r10 r0", "al_r4_r10_r0"},
    {{al, r3, r13, r4}, "", "al r3 r13 r4", "al_r3_r13_r4"},
    {{al, r2, r10, r14}, "", "al r2 r10 r14", "al_r2_r10_r14"},
    {{al, r3, r9, r8}, "", "al r3 r9 r8", "al_r3_r9_r8"},
    {{al, r12, r4, r8}, "", "al r12 r4 r8", "al_r12_r4_r8"},
    {{al, r2, r1, r11}, "", "al r2 r1 r11", "al_r2_r1_r11"},
    {{al, r1, r7, r0}, "", "al r1 r7 r0", "al_r1_r7_r0"},
    {{al, r0, r1, r2}, "", "al r0 r1 r2", "al_r0_r1_r2"},
    {{al, r11, r12, r7}, "", "al r11 r12 r7", "al_r11_r12_r7"},
    {{al, r12, r14, r7}, "", "al r12 r14 r7", "al_r12_r14_r7"},
    {{al, r0, r3, r10}, "", "al r0 r3 r10", "al_r0_r3_r10"},
    {{al, r3, r6, r7}, "", "al r3 r6 r7", "al_r3_r6_r7"},
    {{al, r0, r10, r1}, "", "al r0 r10 r1", "al_r0_r10_r1"},
    {{al, r8, r11, r5}, "", "al r8 r11 r5", "al_r8_r11_r5"},
    {{al, r1, r10, r8}, "", "al r1 r10 r8", "al_r1_r10_r8"},
    {{al, r7, r8, r5}, "", "al r7 r8 r5", "al_r7_r8_r5"},
    {{al, r9, r9, r2}, "", "al r9 r9 r2", "al_r9_r9_r2"},
    {{al, r13, r13, r0}, "", "al r13 r13 r0", "al_r13_r13_r0"},
    {{al, r9, r10, r5}, "", "al r9 r10 r5", "al_r9_r10_r5"},
    {{al, r6, r6, r14}, "", "al r6 r6 r14", "al_r6_r6_r14"},
    {{al, r1, r8, r5}, "", "al r1 r8 r5", "al_r1_r8_r5"},
    {{al, r1, r4, r8}, "", "al r1 r4 r8", "al_r1_r4_r8"},
    {{al, r0, r2, r12}, "", "al r0 r2 r12", "al_r0_r2_r12"},
    {{al, r5, r14, r1}, "", "al r5 r14 r1", "al_r5_r14_r1"},
    {{al, r2, r1, r5}, "", "al r2 r1 r5", "al_r2_r1_r5"},
    {{al, r11, r11, r6}, "", "al r11 r11 r6", "al_r11_r11_r6"},
    {{al, r3, r11, r1}, "", "al r3 r11 r1", "al_r3_r11_r1"},
    {{al, r13, r14, r9}, "", "al r13 r14 r9", "al_r13_r14_r9"},
    {{al, r7, r1, r5}, "", "al r7 r1 r5", "al_r7_r1_r5"},
    {{al, r10, r14, r3}, "", "al r10 r14 r3", "al_r10_r14_r3"},
    {{al, r5, r6, r14}, "", "al r5 r6 r14", "al_r5_r6_r14"},
    {{al, r1, r7, r7}, "", "al r1 r7 r7", "al_r1_r7_r7"},
    {{al, r12, r5, r14}, "", "al r12 r5 r14", "al_r12_r5_r14"},
    {{al, r10, r5, r1}, "", "al r10 r5 r1", "al_r10_r5_r1"},
    {{al, r10, r8, r3}, "", "al r10 r8 r3", "al_r10_r8_r3"},
    {{al, r4, r6, r5}, "", "al r4 r6 r5", "al_r4_r6_r5"},
    {{al, r4, r3, r2}, "", "al r4 r3 r2", "al_r4_r3_r2"},
    {{al, r10, r13, r13}, "", "al r10 r13 r13", "al_r10_r13_r13"},
    {{al, r1, r10, r4}, "", "al r1 r10 r4", "al_r1_r10_r4"},
    {{al, r8, r10, r12}, "", "al r8 r10 r12", "al_r8_r10_r12"},
    {{al, r6, r0, r13}, "", "al r6 r0 r13", "al_r6_r0_r13"},
    {{al, r1, r12, r0}, "", "al r1 r12 r0", "al_r1_r12_r0"},
    {{al, r4, r13, r1}, "", "al r4 r13 r1", "al_r4_r13_r1"},
    {{al, r10, r0, r0}, "", "al r10 r0 r0", "al_r10_r0_r0"},
    {{al, r13, r6, r4}, "", "al r13 r6 r4", "al_r13_r6_r4"},
    {{al, r0, r3, r14}, "", "al r0 r3 r14", "al_r0_r3_r14"},
    {{al, r7, r11, r2}, "", "al r7 r11 r2", "al_r7_r11_r2"},
    {{al, r9, r11, r12}, "", "al r9 r11 r12", "al_r9_r11_r12"},
    {{al, r2, r14, r7}, "", "al r2 r14 r7", "al_r2_r14_r7"},
    {{al, r10, r14, r8}, "", "al r10 r14 r8", "al_r10_r14_r8"},
    {{al, r1, r3, r2}, "", "al r1 r3 r2", "al_r1_r3_r2"},
    {{al, r0, r1, r8}, "", "al r0 r1 r8", "al_r0_r1_r8"},
    {{al, r2, r9, r13}, "", "al r2 r9 r13", "al_r2_r9_r13"},
    {{al, r2, r3, r5}, "", "al r2 r3 r5", "al_r2_r3_r5"},
    {{al, r13, r9, r3}, "", "al r13 r9 r3", "al_r13_r9_r3"},
    {{al, r3, r8, r8}, "", "al r3 r8 r8", "al_r3_r8_r8"},
    {{al, r0, r8, r7}, "", "al r0 r8 r7", "al_r0_r8_r7"},
    {{al, r9, r14, r7}, "", "al r9 r14 r7", "al_r9_r14_r7"},
    {{al, r10, r3, r11}, "", "al r10 r3 r11", "al_r10_r3_r11"},
    {{al, r1, r14, r13}, "", "al r1 r14 r13", "al_r1_r14_r13"},
    {{al, r14, r4, r1}, "", "al r14 r4 r1", "al_r14_r4_r1"},
    {{al, r12, r12, r4}, "", "al r12 r12 r4", "al_r12_r12_r4"},
    {{al, r0, r12, r0}, "", "al r0 r12 r0", "al_r0_r12_r0"},
    {{al, r1, r5, r1}, "", "al r1 r5 r1", "al_r1_r5_r1"},
    {{al, r3, r9, r6}, "", "al r3 r9 r6", "al_r3_r9_r6"},
    {{al, r2, r11, r0}, "", "al r2 r11 r0", "al_r2_r11_r0"},
    {{al, r2, r6, r11}, "", "al r2 r6 r11", "al_r2_r6_r11"},
    {{al, r8, r12, r8}, "", "al r8 r12 r8", "al_r8_r12_r8"},
    {{al, r2, r12, r10}, "", "al r2 r12 r10", "al_r2_r12_r10"},
    {{al, r4, r4, r10}, "", "al r4 r4 r10", "al_r4_r4_r10"},
    {{al, r6, r14, r7}, "", "al r6 r14 r7", "al_r6_r14_r7"},
    {{al, r11, r10, r14}, "", "al r11 r10 r14", "al_r11_r10_r14"},
    {{al, r13, r0, r5}, "", "al r13 r0 r5", "al_r13_r0_r5"},
    {{al, r4, r3, r7}, "", "al r4 r3 r7", "al_r4_r3_r7"},
    {{al, r13, r7, r8}, "", "al r13 r7 r8", "al_r13_r7_r8"},
    {{al, r9, r2, r8}, "", "al r9 r2 r8", "al_r9_r2_r8"},
    {{al, r4, r13, r11}, "", "al r4 r13 r11", "al_r4_r13_r11"},
    {{al, r4, r7, r14}, "", "al r4 r7 r14", "al_r4_r7_r14"},
    {{al, r7, r10, r4}, "", "al r7 r10 r4", "al_r7_r10_r4"},
    {{al, r10, r9, r12}, "", "al r10 r9 r12", "al_r10_r9_r12"},
    {{al, r8, r13, r3}, "", "al r8 r13 r3", "al_r8_r13_r3"},
    {{al, r3, r7, r14}, "", "al r3 r7 r14", "al_r3_r7_r14"},
    {{al, r12, r0, r6}, "", "al r12 r0 r6", "al_r12_r0_r6"},
    {{al, r10, r9, r11}, "", "al r10 r9 r11", "al_r10_r9_r11"},
    {{al, r3, r10, r1}, "", "al r3 r10 r1", "al_r3_r10_r1"},
    {{al, r5, r0, r11}, "", "al r5 r0 r11", "al_r5_r0_r11"},
    {{al, r8, r13, r2}, "", "al r8 r13 r2", "al_r8_r13_r2"},
    {{al, r5, r4, r10}, "", "al r5 r4 r10", "al_r5_r4_r10"},
    {{al, r3, r7, r2}, "", "al r3 r7 r2", "al_r3_r7_r2"},
    {{al, r14, r14, r6}, "", "al r14 r14 r6", "al_r14_r14_r6"},
    {{al, r6, r14, r13}, "", "al r6 r14 r13", "al_r6_r14_r13"},
    {{al, r2, r2, r10}, "", "al r2 r2 r10", "al_r2_r2_r10"},
    {{al, r5, r13, r2}, "", "al r5 r13 r2", "al_r5_r13_r2"},
    {{al, r7, r14, r9}, "", "al r7 r14 r9", "al_r7_r14_r9"},
    {{al, r5, r6, r7}, "", "al r5 r6 r7", "al_r5_r6_r7"},
    {{al, r5, r3, r6}, "", "al r5 r3 r6", "al_r5_r3_r6"},
    {{al, r2, r1, r14}, "", "al r2 r1 r14", "al_r2_r1_r14"},
    {{al, r13, r11, r10}, "", "al r13 r11 r10", "al_r13_r11_r10"},
    {{al, r7, r9, r12}, "", "al r7 r9 r12", "al_r7_r9_r12"},
    {{al, r11, r14, r11}, "", "al r11 r14 r11", "al_r11_r14_r11"},
    {{al, r3, r10, r9}, "", "al r3 r10 r9", "al_r3_r10_r9"},
    {{al, r0, r4, r4}, "", "al r0 r4 r4", "al_r0_r4_r4"},
    {{al, r5, r8, r3}, "", "al r5 r8 r3", "al_r5_r8_r3"},
    {{al, r10, r5, r13}, "", "al r10 r5 r13", "al_r10_r5_r13"},
    {{al, r8, r3, r12}, "", "al r8 r3 r12", "al_r8_r3_r12"},
    {{al, r2, r1, r12}, "", "al r2 r1 r12", "al_r2_r1_r12"},
    {{al, r6, r8, r7}, "", "al r6 r8 r7", "al_r6_r8_r7"},
    {{al, r13, r13, r6}, "", "al r13 r13 r6", "al_r13_r13_r6"},
    {{al, r7, r2, r3}, "", "al r7 r2 r3", "al_r7_r2_r3"},
    {{al, r3, r6, r3}, "", "al r3 r6 r3", "al_r3_r6_r3"},
    {{al, r6, r5, r7}, "", "al r6 r5 r7", "al_r6_r5_r7"}};

// These headers each contain an array of `TestResult` with the reference output
// values. The reference arrays are names `kReference{mnemonic}`.
#include "aarch32/traces/assembler-cond-rd-rn-rm-t32-mul.h"
#include "aarch32/traces/assembler-cond-rd-rn-rm-t32-qadd16.h"
#include "aarch32/traces/assembler-cond-rd-rn-rm-t32-qadd8.h"
#include "aarch32/traces/assembler-cond-rd-rn-rm-t32-qasx.h"
#include "aarch32/traces/assembler-cond-rd-rn-rm-t32-qsax.h"
#include "aarch32/traces/assembler-cond-rd-rn-rm-t32-qsub16.h"
#include "aarch32/traces/assembler-cond-rd-rn-rm-t32-qsub8.h"
#include "aarch32/traces/assembler-cond-rd-rn-rm-t32-sdiv.h"
#include "aarch32/traces/assembler-cond-rd-rn-rm-t32-shadd16.h"
#include "aarch32/traces/assembler-cond-rd-rn-rm-t32-shadd8.h"
#include "aarch32/traces/assembler-cond-rd-rn-rm-t32-shasx.h"
#include "aarch32/traces/assembler-cond-rd-rn-rm-t32-shsax.h"
#include "aarch32/traces/assembler-cond-rd-rn-rm-t32-shsub16.h"
#include "aarch32/traces/assembler-cond-rd-rn-rm-t32-shsub8.h"
#include "aarch32/traces/assembler-cond-rd-rn-rm-t32-smmul.h"
#include "aarch32/traces/assembler-cond-rd-rn-rm-t32-smmulr.h"
#include "aarch32/traces/assembler-cond-rd-rn-rm-t32-smuad.h"
#include "aarch32/traces/assembler-cond-rd-rn-rm-t32-smuadx.h"
#include "aarch32/traces/assembler-cond-rd-rn-rm-t32-smulbb.h"
#include "aarch32/traces/assembler-cond-rd-rn-rm-t32-smulbt.h"
#include "aarch32/traces/assembler-cond-rd-rn-rm-t32-smultb.h"
#include "aarch32/traces/assembler-cond-rd-rn-rm-t32-smultt.h"
#include "aarch32/traces/assembler-cond-rd-rn-rm-t32-smulwb.h"
#include "aarch32/traces/assembler-cond-rd-rn-rm-t32-smulwt.h"
#include "aarch32/traces/assembler-cond-rd-rn-rm-t32-smusd.h"
#include "aarch32/traces/assembler-cond-rd-rn-rm-t32-smusdx.h"
#include "aarch32/traces/assembler-cond-rd-rn-rm-t32-udiv.h"
#include "aarch32/traces/assembler-cond-rd-rn-rm-t32-uhadd16.h"
#include "aarch32/traces/assembler-cond-rd-rn-rm-t32-uhadd8.h"
#include "aarch32/traces/assembler-cond-rd-rn-rm-t32-uhasx.h"
#include "aarch32/traces/assembler-cond-rd-rn-rm-t32-uhsax.h"
#include "aarch32/traces/assembler-cond-rd-rn-rm-t32-uhsub16.h"
#include "aarch32/traces/assembler-cond-rd-rn-rm-t32-uhsub8.h"
#include "aarch32/traces/assembler-cond-rd-rn-rm-t32-uqadd16.h"
#include "aarch32/traces/assembler-cond-rd-rn-rm-t32-uqadd8.h"
#include "aarch32/traces/assembler-cond-rd-rn-rm-t32-uqasx.h"
#include "aarch32/traces/assembler-cond-rd-rn-rm-t32-uqsax.h"
#include "aarch32/traces/assembler-cond-rd-rn-rm-t32-uqsub16.h"
#include "aarch32/traces/assembler-cond-rd-rn-rm-t32-uqsub8.h"
#include "aarch32/traces/assembler-cond-rd-rn-rm-t32-usad8.h"
#include "aarch32/traces/assembler-cond-rd-rn-rm-t32-sadd16.h"
#include "aarch32/traces/assembler-cond-rd-rn-rm-t32-sadd8.h"
#include "aarch32/traces/assembler-cond-rd-rn-rm-t32-sasx.h"
#include "aarch32/traces/assembler-cond-rd-rn-rm-t32-sel.h"
#include "aarch32/traces/assembler-cond-rd-rn-rm-t32-ssax.h"
#include "aarch32/traces/assembler-cond-rd-rn-rm-t32-ssub16.h"
#include "aarch32/traces/assembler-cond-rd-rn-rm-t32-ssub8.h"
#include "aarch32/traces/assembler-cond-rd-rn-rm-t32-uadd16.h"
#include "aarch32/traces/assembler-cond-rd-rn-rm-t32-uadd8.h"
#include "aarch32/traces/assembler-cond-rd-rn-rm-t32-uasx.h"
#include "aarch32/traces/assembler-cond-rd-rn-rm-t32-usax.h"
#include "aarch32/traces/assembler-cond-rd-rn-rm-t32-usub16.h"
#include "aarch32/traces/assembler-cond-rd-rn-rm-t32-usub8.h"
#include "aarch32/traces/assembler-cond-rd-rn-rm-t32-qadd.h"
#include "aarch32/traces/assembler-cond-rd-rn-rm-t32-qdadd.h"
#include "aarch32/traces/assembler-cond-rd-rn-rm-t32-qdsub.h"
#include "aarch32/traces/assembler-cond-rd-rn-rm-t32-qsub.h"

// The maximum number of errors to report in detail for each test.
static const unsigned kErrorReportLimit = 8;

typedef void (MacroAssembler::*Fn)(Condition cond, Register rd, Register rn,
                                   Register rm);

static void TestHelper(Fn instruction, const char* mnemonic,
                       const TestResult reference[]) {
  unsigned total_error_count = 0;
  MacroAssembler masm(BUF_SIZE);

  masm.UseT32();

  for (unsigned i = 0; i < ARRAY_SIZE(kTests); i++) {
    // Values to pass to the macro-assembler.
    Condition cond = kTests[i].operands.cond;
    Register rd = kTests[i].operands.rd;
    Register rn = kTests[i].operands.rn;
    Register rm = kTests[i].operands.rm;

    uint32_t start = masm.GetCursorOffset();
    (masm.*instruction)(cond, rd, rn, rm);
    uint32_t end = masm.GetCursorOffset();

    const byte* result_ptr =
        masm.GetBuffer().GetOffsetAddress<const byte*>(start);
    uint32_t result_size = end - start;

    if (Test::generate_test_trace()) {
      // Print the result bytes.
      printf("static const byte kInstruction_%s_%s[] = {\n", mnemonic,
             kTests[i].identifier);
      for (uint32_t j = 0; j < result_size; j++) {
        if (j == 0) {
          printf("  0x%02" PRIx8, result_ptr[j]);
        } else {
          printf(", 0x%02" PRIx8, result_ptr[j]);
        }
      }
      // This comment is meant to be used by external tools to validate
      // the encoding. We can parse the comment to figure out what
      // instruction this corresponds to.
      printf(" // %s %s %s\n};\n", kTests[i].expect_instruction_before,
             mnemonic, kTests[i].operands_description);
    } else {
      // Check we've emitted the exact same encoding as present in the
      // trace file. Only print up to `kErrorReportLimit` errors.
      if (((result_size != reference[i].size) ||
           (memcmp(result_ptr, reference[i].encoding, reference[i].size) !=
            0)) &&
          (++total_error_count <= kErrorReportLimit)) {
        printf("Error when testing \"%s\" with operands \"%s\":\n", mnemonic,
               kTests[i].operands_description);
        printf("  Expected: ");
        for (uint32_t j = 0; j < reference[i].size; j++) {
          if (j == 0) {
            printf("0x%02" PRIx8, reference[i].encoding[j]);
          } else {
            printf(", 0x%02" PRIx8, reference[i].encoding[j]);
          }
        }
        printf("\n");
        printf("  Found:    ");
        for (uint32_t j = 0; j < result_size; j++) {
          if (j == 0) {
            printf("0x%02" PRIx8, result_ptr[j]);
          } else {
            printf(", 0x%02" PRIx8, result_ptr[j]);
          }
        }
        printf("\n");
      }
    }
  }

  masm.FinalizeCode();

  if (Test::generate_test_trace()) {
    // Finalize the trace file by writing the final `TestResult` array
    // which links all generated instruction encodings.
    printf("static const TestResult kReference%s[] = {\n", mnemonic);
    for (unsigned i = 0; i < ARRAY_SIZE(kTests); i++) {
      printf("  {\n");
      printf("    ARRAY_SIZE(kInstruction_%s_%s),\n", mnemonic,
             kTests[i].identifier);
      printf("    kInstruction_%s_%s,\n", mnemonic, kTests[i].identifier);
      printf("  },\n");
    }
    printf("};\n");
  } else {
    if (total_error_count > kErrorReportLimit) {
      printf("%u other errors follow.\n",
             total_error_count - kErrorReportLimit);
    }
  }
}

// Instantiate tests for each instruction in the list.
#define TEST(mnemonic)                                                      \
  static void Test_##mnemonic() {                                           \
    TestHelper(&MacroAssembler::mnemonic, #mnemonic, kReference##mnemonic); \
  }                                                                         \
  static Test test_##mnemonic(                                              \
      "AARCH32_ASSEMBLER_COND_RD_RN_RM_T32_" #mnemonic, &Test_##mnemonic);
FOREACH_INSTRUCTION(TEST)
#undef TEST

}  // aarch32
}  // vixl