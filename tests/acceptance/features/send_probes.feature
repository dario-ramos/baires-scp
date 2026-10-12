Feature: Send probes

    As a scamper user
    I want to run the new "traceb" command specifying the amount of probes (N) to send to a destination
    So that I can perform different measurements

    Scenario: Valid N and destination
        Given I am running scamper from the command line
        When I run the "traceb" command with -c 5 and destination 8.8.8.8
        Then I should see 5 ICMP probe packets sent
