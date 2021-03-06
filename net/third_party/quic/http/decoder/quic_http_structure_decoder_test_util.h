// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef NET_THIRD_PARTY_QUIC_HTTP_DECODER_QUIC_HTTP_STRUCTURE_DECODER_TEST_UTIL_H_
#define NET_THIRD_PARTY_QUIC_HTTP_DECODER_QUIC_HTTP_STRUCTURE_DECODER_TEST_UTIL_H_

#include "net/third_party/quic/http/decoder/quic_http_structure_decoder.h"
#include "net/third_party/quic/platform/api/quic_test_random.h"

namespace quic {
namespace test {

class QuicHttpStructureDecoderPeer {
 public:
  // Overwrite the QuicHttpStructureDecoder instance with random values.
  static void Randomize(QuicHttpStructureDecoder* p, QuicTestRandomBase* rng);
};

}  // namespace test
}  // namespace quic

#endif  // NET_THIRD_PARTY_QUIC_HTTP_DECODER_QUIC_HTTP_STRUCTURE_DECODER_TEST_UTIL_H_
