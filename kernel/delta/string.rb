class String
  BASE_64_A2B = {}
  (?A..?Z).each {|x| BASE_64_A2B[x] = x - ?A}
  (?a..?z).each {|x| BASE_64_A2B[x] = x - ?a + 26}
  (?0..?9).each {|x| BASE_64_A2B[x] = x - ?0 + 52}
  BASE_64_A2B[?+]  = ?>
  BASE_64_A2B[?\/] = ??
  BASE_64_A2B[?=]  = 0

  def to_sexp(name="(eval)") # TODO: maybe move into lib/compiler and after_load
    $: << File.expand_path("~/Work/p4/zss/src/ruby_parser/dev/lib/") # HACK
    require 'ruby_parser'
    RubyParser.new.process(self, name)
  end
end
